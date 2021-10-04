#include "RobotomyRequestForm.hpp"

Robotomy::Robotomy(std::string name) : Form(name, 72, 45) {
}

Robotomy::Robotomy(const Robotomy &source) : 
Form(source._name, source._req_sign, source._req_exec) {
	_sign = source._sign;
}

Robotomy::~Robotomy() {}

Robotomy	&Robotomy::operator=(const Robotomy &source) {
	if (this == &source)
		return *this;
	_sign = source._sign;
	return (*this);
}

void	Robotomy::finalize(const Bureaucrat &source) const {
	srand(time(NULL));
	if (rand() % 2) {
		std::cout << BOLDRED;
		throw RobotomyFailure();
	}
	std::cout << BOLDWHITE << "Drill drill drill....\n";
	std::cout << BOLDYELLOW << source.getName() << " has been successfully robotomized\n" << DEFAULT;
}

const char *Robotomy::RobotomyFailure::what() const throw() {
	return "Robotomization Failed";
}