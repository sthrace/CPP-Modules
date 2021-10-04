#include "PresidentialPardonForm.hpp"

Presidential::Presidential(std::string name) : Form(name, 25, 5) {
}

Presidential::Presidential(const Presidential &source) :
	Form(source._name, source._req_sign, source._req_exec) {
	_sign = source._sign;
}

Presidential::~Presidential() {}

Presidential	&Presidential::operator=(const Presidential &source) {
	if (this == &source)
		return *this;
	_sign = source._sign;
	return (*this);
}

void	Presidential::finalize(const Bureaucrat &source) const {
	std::cout << BOLDGREEN << source.getName() << " has been pardoned by Zafod Beeblebrox\n" << DEFAULT;
}