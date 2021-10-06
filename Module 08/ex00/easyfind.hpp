#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <array>
#include <list>
#include <forward_list>
#include <string>

# define DEFAULT		"\033[0m"
# define BOLDRED		"\033[1m\033[31m"
# define BOLDGREEN		"\033[1m\033[32m"
# define BOLDYELLOW		"\033[1m\033[33m"
# define BOLDBLUE		"\033[1m\033[34m"
# define BOLDMAGENTA	"\033[1m\033[35m"
# define BOLDCYAN		"\033[1m\033[36m"
# define BOLDWHITE		"\033[1m\033[37m"

class ElementNotFoundException : public std::exception {
	const char* what() const throw() { return "Element has not been found"; } ; };

template<class T>
void	easyfind(T arr, int value) {
	if (std::find(arr.begin(), arr.end(), value) != arr.end())
		std::cout << BOLDGREEN << "Value " << value << " found \n";
	else
		throw ElementNotFoundException();
};

#endif