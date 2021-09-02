#include "header.hpp"

void	replace(std::ifstream *fsRD, std::ofstream *fdWR, char **argv)
{
	std::stringstream strStream;
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	int	pos = 0, found;

	strStream << fsRD->rdbuf();
	std::string content = strStream.str();
	while (1)
	{
		if ((found = content.find(s1, pos)) > 0)
		{
			content.erase(found, s1.length());
			content.insert(found, s2);
			pos = found + s2.length();
		}
		else
			break ;
	}
	*fdWR << content;
}

int	open(char **argv)
{
	std::string     file = argv[1];
	std::ifstream	fsRD(file);
	if (!fsRD)
	{
		std::cout << BOLDRED << "Can not open ";
		std::cout << BOLDWHITE << "<" << file << ">" << std::endl;
		return (1);
	}
	std::ofstream	fsWR(file.append(".replace"));
	if (!fsWR)
	{
		std::cout << BOLDRED << "Can not open ";
		std::cout << BOLDWHITE << "<" << file << ">" << std::endl;
		fsRD.close();
		return (1);
	}
	replace(&fsRD, &fsWR, argv);
	fsRD.close();
	fsWR.close();
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << BOLDRED << "Invalid number of parameters" << std::endl;
		return (1);
	}
	if (strlen(argv[2]) == 0)
	{
		std::cout << BOLDRED << "String to be replaced can not be empty" << std::endl;
		return (1);
	}
	if (open(argv))
		return (1);
	return (0);
}