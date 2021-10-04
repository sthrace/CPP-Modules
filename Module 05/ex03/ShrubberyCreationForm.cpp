#include "ShrubberyCreationForm.hpp"

Shrubbery::Shrubbery(std::string name) : Form(name, 145, 137) {
}

Shrubbery::Shrubbery(const Shrubbery &source) :
	Form(source._name, source._req_sign, source._req_exec) {
	_sign = source._sign;
}

Shrubbery::~Shrubbery() {}

Shrubbery	&Shrubbery::operator=(const Shrubbery &source) {
	if (this == &source)
		return *this;
	_sign = source._sign;
	return (*this);
}

void	Shrubbery::finalize(const Bureaucrat &source) const {
	std::ofstream output;
	try {
		output.open(source.getName() + "_shrubbery");
	}
	catch (std::ostream::failure e){
		std::cerr << "Exception opening file\n";
	}
	output << "🄰🅂🄲🄸🄸 🅃🅁🄴🄴🅂";
	output.close();
}