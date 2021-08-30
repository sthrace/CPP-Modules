#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
public:

	Phonebook(void);
	~Phonebook(void);

	void	setEntry(int index);
	void	getEntries(void) const;
	void	getEntry(void) const;
	void	error(std::string msg) const;
	void 	setIndex(void);
	int 	getIndex(void) const;

private:
	Contact _contact[SIZE];
	int		_index;
};

#endif