#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "header.hpp"

class Contact
{
public:

	Contact(void);
	void		setEntry(void);
	void		getEntry(void) const;
	void		getEntryTrimmed(void) const;
	std::string trimVar(std::string var) const;
	std::string	setVar(std::string query);
	std::string getVar(std::string query) const;
	int	 		getStatus(void) const;

private:

	std::string _FirstName;
	std::string _LastName;
	std::string _NickName;
	std::string _PhoneNumber;
	std::string _DarkestSecret;
	int 		_status;

};

#endif