#include "Karen.hpp"

int	main(int argc, char *argv[])
{
	Karen	karen;

	if (argc == 2)
	{
		std::string	msg = argv[1];
		karen.complain(msg);
	}
	else
	{
		std::cout << BOLDRED;
		std::cout << "Wrong number of arguments";
		std::cout << DEFAULT << std::endl;
		return (1);
	}
	return (0);
}