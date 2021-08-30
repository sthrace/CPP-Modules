#include "Phonebook.hpp"

Phonebook::Phonebook() : _index(0)
{
	std::cout << std::endl << std::endl;
	std::cout << BOLDCYAN;
	std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
	std::cout << DEFAULT;
	std::cout << std::endl << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << std::endl << std::endl;
	std::cout << BOLDCYAN;
	std::cout << "██████╗ ██╗   ██╗███████╗" << std::endl;
	std::cout << "██╔══██╗╚██╗ ██╔╝██╔════╝" << std::endl;
	std::cout << "██████╔╝ ╚████╔╝ █████╗  " << std::endl;
	std::cout << "██╔══██╗  ╚██╔╝  ██╔══╝  " << std::endl;
	std::cout << "██████╔╝   ██║   ███████╗" << std::endl;
	std::cout << "╚═════╝    ╚═╝   ╚══════╝" << std::endl;
	std::cout << DEFAULT;
	std::cout << std::endl << std::endl;
}

void	Phonebook::error(std::string msg) const
{
	std::cout << BOLDRED;
	std::cout << msg;
	std::cout << DEFAULT;
	std::cout << std::endl << std::endl;
}

void	Phonebook::setEntry(int index)
{
	_contact[index].setEntry();
}

void	Phonebook::getEntries(void) const
{
	if (_contact[0].getStatus())
	{
		std::cout << BOLDWHITE;
		std::cout << "  index   |First Name|Last  Name| Nickname " << std::endl;
	}
	else
	{
		error("Contact list is empty, try adding some entries");
		return ;
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (_contact[i].getStatus())
		{
			std::cout << BOLDWHITE;
			std::cout << "         " << i << "|";
			_contact[i].getEntryTrimmed();
		}
	}
	std::cout << DEFAULT;
	std::cout << std::endl;
	getEntry();
}

void	Phonebook::getEntry(void) const
{
	std::string	buf;
	int			index;

	std::cout << YELLOW << "Enter index: " << DEFAULT;
	while (!(std::cin >> buf) || buf.size() > 1 || buf[0] < '0' || buf[0] > '7')
	{
		if (std::cin.eof())
			return ;
		std::cout << std::endl;
        std::cin.clear();
        error("Please povide numerical value from 0 to 7");
		std::cout << YELLOW << "Enter index: " << DEFAULT;
    }
	index = atoi(&buf[0]);
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (!(_contact[index].getStatus()))
	{
		std::cout << std::endl;
		error("Index not found, try again");
		getEntry();
	}
	else
	{
		std::cout << std::endl;
		_contact[index].getEntry();
	}
}

void	Phonebook::setIndex(void)
{
	_index++;
}

int		Phonebook::getIndex(void) const
{
	return _index;
}