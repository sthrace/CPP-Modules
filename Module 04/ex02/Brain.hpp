#pragma once
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "header.hpp"

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain(void);
	Brain(const Brain &source);
	~Brain();

	Brain	&operator=(const Brain &source);
};

#endif