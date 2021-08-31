#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (!N)
		return (nullptr);
	Zombie	*zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		char number = i + 49;
		zombieHorde[i].setName(name + number);
		zombieHorde[i].announce();
	}
	return (zombieHorde);
}