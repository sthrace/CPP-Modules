#pragma once

#include <cstdint>
#include <iostream>

#define DEFAULT			"\033[0m"
#define BOLDRED			"\033[1m\033[31m"
#define BOLDGREEN		"\033[1m\033[32m"
#define BOLDYELLOW		"\033[1m\033[33m"
#define BOLDBLUE		"\033[1m\033[34m"
#define BOLDMAGENTA		"\033[1m\033[35m"
#define BOLDCYAN		"\033[1m\033[36m"
#define BOLDWHITE		"\033[1m\033[37m"

typedef struct s_data
{
	int	sample;
}	Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
