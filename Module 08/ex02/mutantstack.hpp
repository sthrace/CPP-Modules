#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>
# include <deque>

# define DEFAULT		"\033[0m"
# define BOLDRED		"\033[1m\033[31m"
# define BOLDGREEN		"\033[1m\033[32m"
# define BOLDYELLOW		"\033[1m\033[33m"
# define BOLDBLUE		"\033[1m\033[34m"
# define BOLDMAGENTA	"\033[1m\033[35m"
# define BOLDCYAN		"\033[1m\033[36m"
# define BOLDWHITE		"\033[1m\033[37m"

template<typename T>
class MutantStack : public std::stack<T>
{
	private:
	public:
		typedef typename std::deque<T>::iterator 				iterator;
		typedef typename std::deque<T>::const_iterator  		const_iterator;
		typedef typename std::deque<T>::reverse_iterator 		reverse_iterator;
		typedef typename std::deque<T>::const_reverse_iterator  const_reverse_iterator;

		MutantStack(void) : std::stack<T>() {};
		MutantStack(const MutantStack<T> &source) : std::stack<T>(source) {};
		~MutantStack() {};

		MutantStack<T>	&operator=(const MutantStack<T> &source) {
			if (this != &source){
				this->c = source.c;
			}
			return *this;
		};

		iterator				begin(void) { return MutantStack<T>::c.begin(); };
		const_iterator			begin(void) const { return MutantStack<T>::c.begin(); };
		reverse_iterator		rbegin(void) { return MutantStack<T>::c.rbegin(); };
		const_reverse_iterator	rbegin(void) const { return MutantStack<T>::c.rbegin(); };
		iterator				end(void) { return MutantStack<T>::c.end(); };
		const_iterator			end(void) const { return MutantStack<T>::c.end(); };
		reverse_iterator		rend(void) { return MutantStack<T>::c.rend(); };
		const_reverse_iterator	rend(void) const { return MutantStack<T>::c.rend(); };
};

#endif