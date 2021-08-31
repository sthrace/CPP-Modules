#include <string>
#include <iostream>
# include <iomanip>

# define DEFAULT "\033[0m"
# define BOLDYELLOW  "\033[1m\033[33m"

int	main()
{
	std::string	str 		= "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << BOLDYELLOW;
	std::cout << " data type |     value      |    address" << std::endl;
	std::cout << " String    |" << std::setw(16) << str << "|"  << &str << std::endl;
	std::cout << " Pointer   |" << std::setw(16) << *stringPTR << "|" <<  stringPTR << std::endl;
	std::cout << " Reference |" << std::setw(16) << stringREF << "|" << &stringREF << std::endl;
}