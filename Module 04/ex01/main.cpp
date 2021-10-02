#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// const Animal* array[4];

	// for (int k = 0; k < 4; k++)
	// {
	// 	if (k % 2)
	// 	{
	// 		array[k] = new Dog();
	// 		std::cout << array[k]->getType() << " " << std::endl;
	// 		array[k]->makeSound();
	// 	}
	// 	else
	// 	{
	// 		array[k] = new Cat();
	// 		std::cout << array[k]->getType() << " " << std::endl;
	// 		array[k]->makeSound();
	// 	}
	// }
	Dog basic;
{
Dog tmp = basic;
}
	const Dog*x = new Dog();
	const Dog*y = new Dog(*x);
	std::cout << BOLDWHITE << "X destrooyed\n";
	// for (int k = 3; k >= 0; k--)
	// {
	// 	if (k % 2)
	// 		delete array[k];
	// 	else
	// 		delete array[k];
	// }
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound();
	// j->makeSound();
	// delete x;
	// std::cout << x << std::endl;
	// std::cout << &y << std::endl;
	delete y;
	delete x;
	// delete y;
	// delete j;
	// delete i;
}