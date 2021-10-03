#pragma once

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		Form();
		std::string const _name;
		bool			  _sign;
		int			const _req_sign;
		int			const _req_exec;

	public:
		Form(std::string const name, int const req, int const exec);
		Form(const Form &source);
		~Form();

		Form &operator=(const Form &source);
		std::string const &getName(void) const;
		bool 	getSign(void) const;
		int 	getReqSign(void) const;
		int 	getReqExec(void) const;
		void	beSigned(Bureaucrat &source);
		void	setSign();

		class GradeTooLowException : public std::exception	{
			const char* what() const throw(); };
};

std::ostream operator<<(std::ostream &output, const Form &source);