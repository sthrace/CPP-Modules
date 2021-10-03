#pragma once

# include "Form.hpp"
# include <fstream>

class Shrubbery : public Form
{
	private:
		Shrubbery(void);
	public:
		Shrubbery(std::string name);
		Shrubbery(const Shrubbery &source);
		~Shrubbery();

		Shrubbery &operator=(const Shrubbery &source);
		void	finalize(const Bureaucrat & source) const;
};