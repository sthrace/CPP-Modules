#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat one;
	Bureaucrat two("Alf", 150);
	Bureaucrat three("Fin", 1);
	Bureaucrat four("Arch", 0);
	Bureaucrat five("Bill", 151);

	two.gradeDown();
	three.gradeDown();
	three.gradeUp();
	three.gradeUp();

	// try
	// {

	// }
	// catch ()
	// {

	// }

	return 0;
}