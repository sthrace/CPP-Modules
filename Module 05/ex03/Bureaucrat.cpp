#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &source) : _name(source._name) { 
	*this = source; }

Bureaucrat::~Bureaucrat() {}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &source) {
	if (this == &source)
		return *this;
	_grade = source._grade;
	return *this;
}

std::string	const &Bureaucrat::getName(void) const { return _name; }

int			Bureaucrat::getGrade(void) const { return _grade; }

void		Bureaucrat::gradeUp(void) {
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void		Bureaucrat::gradeDown(void) { 
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void		Bureaucrat::signForm(Form &source){
	if (source.getSign() == true){
		std::cout << BOLDRED << _name << " cannot sign " << source.getName() << " because ";
		throw Bureaucrat::FormAlreadySigned();
	}
	std::cout << BOLDMAGENTA << _name << " signs " << source.getName() << DEFAULT << std::endl;
	source.setSign();
}

void		Bureaucrat::executeForm(const Form & source) const {
	if (source.getReqExec() < _grade) {
		std::cout << BOLDRED << _name << " cannot sign " << source.getName() << " because ";
		throw Bureaucrat::ExecTooLowException();
	}
	source.finalize(*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "his Grade is too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "his Grade is too Low";
}

const char *Bureaucrat::ExecTooLowException::what() const throw() {
	return "his Execution Grade is too Low";
}

const char *Bureaucrat::FormAlreadySigned::what() const throw() {
	return "it is already signed";
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &source)
{
	output << BOLDGREEN << "<" << source.getName() 
	<< ">, bureaucrat grade <" << source.getGrade() 
	<< ">.\n" << DEFAULT;
	return (output);
}