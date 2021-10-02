#pragma once
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

# define DEFAULT		"\033[0m"
# define BOLDRED		"\033[1m\033[31m"
# define BOLDGREEN		"\033[1m\033[32m"
# define BOLDYELLOW		"\033[1m\033[33m"
# define BOLDBLUE		"\033[1m\033[34m"
# define BOLDMAGENTA	"\033[1m\033[35m"
# define BOLDCYAN		"\033[1m\033[36m"
# define BOLDWHITE		"\033[1m\033[37m"

class Bureaucrat
{
	private:
		std::string _name;
		int			_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat &source);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &source);

		std::string	const &getName(void) const;
		int			getGrade(void) const;
		void		gradeUp(void);
		void		gradeDown(void);
};

std::ostream	&operator<<(std::ostream &output, Bureaucrat const &source);

#endif