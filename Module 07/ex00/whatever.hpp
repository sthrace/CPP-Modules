#pragma once

#include <iostream>

#define DEFAULT			"\033[0m"
#define BOLDRED			"\033[1m\033[31m"
#define BOLDGREEN		"\033[1m\033[32m"
#define BOLDYELLOW		"\033[1m\033[33m"
#define BOLDBLUE		"\033[1m\033[34m"
#define BOLDMAGENTA		"\033[1m\033[35m"
#define BOLDCYAN		"\033[1m\033[36m"
#define BOLDWHITE		"\033[1m\033[37m"

template<typename T>
void	swap(T &a, T &b) 
{ 
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
};

template<typename T>
T const &min(T const &a, T const &b) { 
	return ((a < b) ? a : b); 
};

template<typename T>
T const &max(T const &a, T const &b) {  
	return ((a > b) ? a : b); 
};