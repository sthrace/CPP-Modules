#include "header.hpp"

void	replace(std::ifstream *fsRD, std::ofstream *fdWR, std::string s1, std::string s2)
{
	std::stringstream strStream;
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
	*fdWR << content << std::endl;
}

int	open(std::string file, std::string s1, std::string s2)
{
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
		return (1);
	}
	replace(&fsRD, &fsWR, s1, s2);
	fsRD.close();
	fsWR.close();
	return (0);
}

int	main(int argc, char *argv[])
{
	std::string		file;
	std::string		s1;
	std::string		s2;

	if (argc != 4)
	{
		std::cout << BOLDRED << "Invalid number of parameters" << std::endl;
		return (1);
	}
	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (open(file, s1, s2))
		return (1);
	return (0);
}