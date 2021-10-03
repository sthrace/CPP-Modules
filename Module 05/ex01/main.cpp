#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat one("Alf", 13);
		Bureaucrat two("Fred", 15);
		Form	   form("VIF", 14, 14);
		std::cout << one << std::endl;
		form.beSigned(one);
		// form.beSigned(one);
		form.beSigned(two);
	}
	catch (std::exception const &e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}

	return 0;
}