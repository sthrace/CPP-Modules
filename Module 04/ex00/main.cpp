#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* w = new WrongAnimal();
	const WrongAnimal* x = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << w->getType() << " " << std::endl;
	std::cout << x->getType() << " " << std::endl;
	w->makeSound();
	x->makeSound();
	delete meta;
	delete j;
	delete i;
	delete w;
	delete x;
}