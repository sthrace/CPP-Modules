#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

# define DEFAULT "\033[0m"
# define BOLDRED     "\033[1m\033[31m"
# define BOLDGREEN   "\033[1m\033[32m"
# define BOLDYELLOW  "\033[1m\033[33m"

int	main(int argc, char *argv[])
{
	std::string		file;
	std::string		s1;
	std::string		s2;
	std::string		strInput;

	if (argc != 4)
	{
		std::cout << BOLDRED << "Invalid number of parameters" << std::endl;
		return (1);
	}
	
	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream	RD(file);
	if (!RD)
	{
		std::cout << BOLDRED;
		std::cout << "File: " << RD << " can not be opened" << std::endl;
	}
	std::ofstream	WR(file.append(".replace"));
	std::cout << BOLDYELLOW;
	std::size_t	found 	
	while (!(getline(RD, strInput).eof()))
	{
		std::cout << strInput << std::endl;
	}
	std::cout << strInput << std::endl;
	return (0);
}