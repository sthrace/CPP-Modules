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

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too Low";
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &source)
{
	output << BOLDGREEN << "<" << source.getName() 
	<< ">, bureaucrat grade <" << source.getGrade() 
	<< ">.\n" << DEFAULT;
	return (output);
}