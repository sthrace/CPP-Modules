#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat one("Alf", 150);
		std::cout << one << std::endl;
		Bureaucrat two("Fin", 1);
		std::cout << two << std::endl;
		Bureaucrat three("Arch", 0);
		std::cout << three << std::endl;
		Bureaucrat four("Bill", 151);
		std::cout << four << std::endl;

		one.gradeDown();
		two.gradeDown();
		two.gradeUp();
		two.gradeUp();
	}
	catch (std::exception const &e)
	{
		std::cerr << BOLDRED << e.what() << DEFAULT << std::endl;
	}

	return 0;
}