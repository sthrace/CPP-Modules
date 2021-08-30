#include "Phonebook.hpp"

void	request(std::string *buf)
{
	std::cout << BOLDGREEN;
	std::cout << "Input your query (ADD, SEARCH or EXIT): " << DEFAULT;
	std::getline(std::cin, *buf);
	std::cout << std::endl;
}

int	main()
{	
	Phonebook 	Phonebook;
	std::string buf;

	while ((buf.compare("EXIT")) && !std::cin.eof())
	{
		request(&buf);
		if (!(buf.compare("ADD")))
		{
			Phonebook.setEntry(Phonebook.getIndex() % SIZE);
			Phonebook.setIndex();
		}
		else if (!(buf.compare("SEARCH")))
			Phonebook.getEntries();
		else if ((buf.compare("EXIT")) && !std::cin.eof())
		{
			std::cout << BOLDRED << "Invalid request. Type ADD SEARCH or EXIT" << DEFAULT;
			std::cout << std::endl << std::endl;
		}
	}
	return (0);
}