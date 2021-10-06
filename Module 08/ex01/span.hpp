#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <random>
#include <algorithm>
#include <vector>
#include <limits>

# define DEFAULT		"\033[0m"
# define BOLDRED		"\033[1m\033[31m"
# define BOLDGREEN		"\033[1m\033[32m"
# define BOLDYELLOW		"\033[1m\033[33m"
# define BOLDBLUE		"\033[1m\033[34m"
# define BOLDMAGENTA	"\033[1m\033[35m"
# define BOLDCYAN		"\033[1m\033[36m"
# define BOLDWHITE		"\033[1m\033[37m"

class Span
{
	private:
		uint	N;
		Span();
	public:
		Span(uint arg);
		Span(const Span &source);
		~Span();

		std::vector<int>	vc;
		Span &operator=(const Span &source);

		void addNumber(int nbr);
		int shortestSpan(void);
		int longestSpan(void);

		class CapacityLimitReached : public std::exception {
			virtual const char* what() const throw(); 
		};
		class TooFewElements : public std::exception {
			virtual const char* what() const throw(); 
		};
};

#endif