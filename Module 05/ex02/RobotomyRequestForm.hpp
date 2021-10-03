#pragma once

# include "Form.hpp"
# include <random>

class Robotomy : public Form
{
	private:
		Robotomy(void);
	public:
		Robotomy(std::string name);
		Robotomy(const Robotomy &source);
		~Robotomy();

		Robotomy &operator=(const Robotomy &source);
		void	finalize(const Bureaucrat & source) const;

		class RobotomyFailure : public std::exception	{
			const char* what() const throw(); };
};