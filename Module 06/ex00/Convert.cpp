#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(char *av) : arg(av) {}

Convert::Convert(const Convert &source) : arg(source.arg) {}

Convert::~Convert() {}

Convert	&Convert::operator=(const Convert &source) {
	if (this == &source)
		return *this;
	return *this;
}

std::string const Convert::get_arg(void) const { return arg; }

char	Convert::toChar() { 
	c_value = stol(arg);
	return c_value; 
}

long	Convert::toInt() { 
	i_value = stol(arg);
	return i_value;
}

float	Convert::toFloat() { 
	try {
		f_value = std::stof(arg);
	}
	catch (std::exception const &e) {
		std::cout << "char: impossible\n";
		std::cout << "int: impossible\n";
		std::cout << "float: impossible\n";
		std::cout << "double: impossible\n";
		exit(1);
	}
	return f_value; 
}

double	Convert::toDouble() { 
	d_value = std::stod(arg);
	return d_value; 
}

void	Convert::init() {
	std::cout << BOLDYELLOW;
	if (toFloat() < 0 || toFloat() > 127 || isnan(toFloat()) || isinf(toFloat()))
		std::cout << "char: impossible\n";
	else if (toFloat() < 32 || toFloat() == 127)
		std::cout << "char: Non Displayable\n";
	else
		std::cout << "char: '" << toChar() << "'\n";
	if (isnan(toFloat()) || isinf(toFloat()) || toInt() > INT_MAX || toInt() < INT_MIN) {
		std::cout << "int: impossible\n";
		if (!isnan(toFloat()) && !isinf(toFloat()))
			std::cout << "float: " << toFloat() << "f\n";
		else
			std::cout << "float: " << toFloat() << "\n";
		std::cout << "double: " << toDouble() << std::endl;
	}
	else {
		std::cout << "int: " << toInt() << std::endl;
		if (toFloat() - toInt()) {
			std::cout << "float: " << toFloat() << "f\n";
			std::cout << "double: " << toDouble() << std::endl;
		}
		else {
			std::cout << "float: " << toFloat() << ".0f\n";
			std::cout << "double: " << toDouble() << ".0\n";
		}
	}
	std::cout << DEFAULT;
}