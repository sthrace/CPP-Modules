#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern & source) { *this = source; }

Intern::~Intern() {}

Intern	&Intern::operator=(const Intern &source) {
	if (this == &source)
		return *this;
	return *this;
}

Form*	Intern::makeForm(std::string type, std::string name) {
	Form *ret = NULL;
	int i = 0;
	std::string types[3] = { "shrubbery request", "robotomy request", "presidential request"};
	while (type.compare(types[i]) && i < 3)
		i++;
	types[i].resize(types[i].find(' ', 0));
	switch (i)
	{
		case 0:
			std::cout << BOLDMAGENTA << "Intern creates " << types[0] << " form\n" << DEFAULT;
			ret = new Shrubbery(name);
			break ;
		case 1:
			std::cout << BOLDMAGENTA << "Intern creates " << types[1] << " form\n" << DEFAULT;
			ret = new Robotomy(name);
			break ;
		case 2:
			std::cout << BOLDMAGENTA << "Intern creates " << types[2] << " form\n" << DEFAULT;
			ret = new Presidential(name);
			break ;
		case 3:
			throw InvalidForm();
			break ;
	}
	return ret;
}

const char *Intern::InvalidForm::what() const throw() {
	return "Requested form does not exist";
}

