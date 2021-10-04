#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		Intern*	intern = new Intern();
		intern->makeForm("shrubbery request", "bill");
		intern->makeForm("robotomy request", "bill");
		// Bureaucrat one("Alf", 13);
		// Bureaucrat two("Fred", 15);
		// Bureaucrat three("Fin", 1);
		// Form* shrub = new Shrubbery("Shrub");
		// Form* robo = new Robotomy("Robo");
		// Form* pres = new Presidential("Pres");
		// std::cout << one << std::endl;
		// shrub->beSigned(one);
		// shrub->execute(one);
		// robo->beSigned(one);
		// robo->execute(two);
		// pres->beSigned(three);
		// pres->execute(three);
		// pres->execute(one);
	}
	catch (std::exception const &e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}

	return 0;
}