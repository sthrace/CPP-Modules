#include "Convert.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << BOLDRED << "Provide one parameter for conversion\n";
		return 1;
	}
	Convert	res(av[1]);
	res.init();
	return 0;
}