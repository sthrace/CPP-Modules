#include "Form.hpp"

Form::Form(std::string const name, int const req, int const exec) :
_name(name), _sign(false), _req_sign(req), _req_exec(exec) {
}

Form::Form (const Form &source) : 
_name(source._name), _req_sign(source._req_sign), _req_exec(source._req_exec) {
	*this = source;
}

Form::~Form() {}

Form	&Form::operator=(const Form &source) {
	if (this == &source)
		return *this;
	_sign = source._sign;
	return (*this);
}

std::string const &Form::getName(void) const { return _name; }
		
bool 	Form::getSign(void) const { return _sign; }

int 	Form::getReqSign(void) const { return _req_sign; }

int 	Form::getReqExec(void) const { return _req_exec; }
		
void	Form::beSigned(Bureaucrat &source){
	if (source.getGrade() > _req_sign) {
		std::cout << BOLDRED << source.getName() << " cannot sign " << _name << " because ";
		throw Form::GradeTooLowException();
	}
	source.signForm(*this);
}

const char *Form::GradeTooLowException::what() const throw() {
	return "his Grade is too Low";
}

void		Form::setSign() { _sign = true; }