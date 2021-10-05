#pragma once

#define DEFAULT			"\033[0m"
#define BOLDRED			"\033[1m\033[31m"
#define BOLDGREEN		"\033[1m\033[32m"
#define BOLDYELLOW		"\033[1m\033[33m"
#define BOLDBLUE		"\033[1m\033[34m"
#define BOLDMAGENTA		"\033[1m\033[35m"
#define BOLDCYAN		"\033[1m\033[36m"
#define BOLDWHITE		"\033[1m\033[37m"

#include <iostream>
#include <string>
#include <cmath>
#include <limits>

class Convert
{
private:
	std::string const arg;
	char	c_value;
	long	i_value;
	float	f_value;
	double	d_value;
	Convert();
public:
	Convert(char *av);
	Convert(const Convert &source);
	~Convert();

	Convert &operator=(const Convert &source);
	std::string	const get_arg(void) const;
	void	init();
	char	toChar();
	long	toInt();
	float	toFloat();
	double	toDouble();
};
