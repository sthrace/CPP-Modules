#include "Karen.hpp"

void Karen::complain(std::string msg)
{
	void (Karen::*levels[4])() = {&Karen::error, &Karen::warning, &Karen::info, &Karen::debug};

	int	key = 0;
	key = msg.compare("DEBUG") == 0 ? 4 : key;
	key = msg.compare("INFO") == 0 ? 3 : key;
	key = msg.compare("WARNING") == 0 ? 2 : key;
	key = msg.compare("ERROR") == 0 ? 1 : key;
	switch(key)
	{
		case 1 ... 4:
			while (key--)
				(this->*levels[key])();
			break ;
		default:
			std::cout << BOLDMAGENTA;
			std::cout << "[ Probably complaining about insignificant problems ]";
			std::cout << DEFAULT << std::endl << std::endl;
			break ;
	}
}

void Karen::debug(void)
{
	std::cout << BOLDYELLOW;
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my "
	"7XL-double-cheese-triple-pickle-special-ketchup "
	"burger. I just love it!";
	std::cout << std::endl << std::endl;
}

void Karen::info(void)
{
	std::cout << BOLDGREEN;
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost "
	"more money. You don’t put enough! If you did I would "
	"not have to ask for it!";
	std::cout << std::endl << std::endl;
}

void Karen::warning(void)
{
	std::cout << BOLDBLUE;
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon "
	"for free. I’ve been coming here for years and you just "
	"started working here last month.";
	std::cout << std::endl << std::endl;
}

void Karen::error(void)
{
	std::cout << BOLDCYAN;
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.\"";
	std::cout << std::endl << std::endl;
}