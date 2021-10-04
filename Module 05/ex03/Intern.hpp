#pragma once

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iomanip>

class Intern
{
	private:
		Form*	ShrubberyForm(std::string name);
		Form*	RobotomyForm(std::string name);
		Form*	PresidentialForm(std::string name);
	public:
		Intern(void);
		Intern(const Intern &source);
		~Intern();

		Intern &operator=(const Intern &source);
		Form*	makeForm(std::string type, std::string name);
		class	InvalidForm : public std::exception { const char* what() const throw(); };
};