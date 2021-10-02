#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unnamed"), _grade(0) {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {}

Bureaucrat::Bureaucrat(const Bureaucrat &source) { *this = source; }

Bureaucrat::~Bureaucrat() {}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &source) {
	if (this == &source)
		return *this;
	_name = source._name;
	_grade = source._grade;
	return *this;
}

std::string	const &Bureaucrat::getName(void) const { return _name; }
int			Bureaucrat::getGrade(void) const { return _grade; }
void		Bureaucrat::gradeUp(void) { _grade--; }
void		Bureaucrat::gradeDown(void) { _grade++; }

std::ostream &operator<<(std::ostream &output, const Bureaucrat &source)
{
	output << BOLDWHITE << "<" << source.getName() 
	<< ">, bureaucrat grade <" << source.getGrade() 
	<< ">.\n" << DEFAULT;
	return (output);
}