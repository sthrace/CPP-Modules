#include "Contact.hpp"

Contact::Contact() : _status(0)
{
	return ;
}

void	Contact::setEntry(void)
{
	_FirstName = setVar("Enter First Name: ");
	_LastName = setVar("Enter Last Name: ");
	_NickName = setVar("Enter Nickname: ");
	_PhoneNumber = setVar("Enter Phone Number: ");
	_DarkestSecret = setVar("Enter Darkest Secret: ");
	_status = 1;
	std::cout << std::endl;
}

std::string	Contact::setVar(std::string query)
{
	std::string answer;

	std::cout << BOLDGREEN << query;
	std::cout << DEFAULT;
	std::getline(std::cin, answer);

	return (answer);
}

void		Contact::getEntry(void) const
{
	std::cout << BOLDWHITE;
	std::cout << "First Name: " << getVar("FirstName") << std::endl;
	std::cout << "Last Name: " << getVar("LastName") << std::endl;
	std::cout << "Nickame: " << getVar("NickName") << std::endl;
	std::cout << "Phone Number: " << getVar("PhoneNumber") << std::endl;
	std::cout << "Darkest Secret: " << getVar("DarkestSecret") << std::endl;
	std::cout << DEFAULT << std::endl;
}

void		Contact::getEntryTrimmed(void) const
{
	std::cout << std::setw(10) << trimVar("FirstName") << "|";
	std::cout << std::setw(10) << trimVar("LastName") << "|";
	std::cout << std::setw(10) << trimVar("NickName");
	std::cout << std::endl;
}

std::string	Contact::trimVar(std::string var) const
{
	if ((getVar(var).size() > 10))
		return getVar(var).substr(0, 9).append(".");
	return getVar(var);

}

std::string	Contact::getVar(std::string entry) const
{
	if (!(entry.compare("FirstName")))
		return _FirstName;
	else if (!(entry.compare("LastName")))
		return _LastName;
	else if (!(entry.compare("NickName")))
		return _NickName;
	else if (!(entry.compare("PhoneNumber")))
		return _PhoneNumber;
	else
		return _DarkestSecret;
}

int		Contact::getStatus(void) const
{
	return (_status);
}

