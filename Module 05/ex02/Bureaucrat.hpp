#pragma once
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

# define DEFAULT		"\033[0m"
# define BOLDRED		"\033[1m\033[31m"
# define BOLDGREEN		"\033[1m\033[32m"
# define BOLDYELLOW		"\033[1m\033[33m"
# define BOLDBLUE		"\033[1m\033[34m"
# define BOLDMAGENTA	"\033[1m\033[35m"
# define BOLDCYAN		"\033[1m\033[36m"
# define BOLDWHITE		"\033[1m\033[37m"

class Form;

class Bureaucrat
{
	private:
		std::string const _name;
		int				  _grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat &source);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &source);

		std::string	const &getName(void) const;
		int			getGrade(void) const;
		void		gradeUp(void);
		void		gradeDown(void);
		void		signForm(Form &source);
		void 		executeForm(const Form & source) const;

		class GradeTooHighException : public std::exception	{
			const char* what() const throw(); };
		class GradeTooLowException : public std::exception	{
			const char* what() const throw(); };
		class ExecTooLowException : public std::exception	{
			const char* what() const throw(); };
		class FormAlreadySigned : public std::exception	{
			const char* what() const throw(); };

};

std::ostream	&operator<<(std::ostream &output, Bureaucrat const &source);

#endif