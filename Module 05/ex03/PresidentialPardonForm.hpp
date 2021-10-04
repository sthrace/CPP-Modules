#pragma once

# include "Form.hpp"

class Presidential : public Form
{
	private:
		Presidential(void);
	public:
		Presidential(std::string name);
		Presidential(const Presidential &source);
		~Presidential();

		Presidential &operator=(const Presidential &source);
		void	finalize(const Bureaucrat & source) const;
};