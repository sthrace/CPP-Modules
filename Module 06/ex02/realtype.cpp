#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <random>

Base*	generate(void)
{
	Base* ret = NULL;
	srand(time(NULL));
	switch(rand() % 3)
	{
		case 0:
			ret = new A;
			break ;
		case 1:
			ret = new B;
			break ;
		case 2:
			ret = new C;
			break ;		
	}
	return ret;
}

void	identify(Base *p)
{
	A *ap = dynamic_cast<A*>(p);
	B *bp = dynamic_cast<B*>(p);
	C *cp = dynamic_cast<C*>(p);
	
	if (ap)
		std::cout << "A\n";
	else if (bp)
		std::cout << "B\n";
	else if (cp)
		std::cout << "C\n";
	else
		std::cout << "Derived class can not be identified by Pointer\n";
}

void	identify(Base& p)
{	
	try {
		A ar = dynamic_cast<A&>(p);
		std::cout << "A\n";
	}
	catch(std::exception & e) {}
	try {
		B br = dynamic_cast<B&>(p);
		std::cout << "B\n";
	}
	catch(std::exception & e) {}
	try {
		C cr = dynamic_cast<C&>(p);
		std::cout << "C\n";
	}
	catch(std::exception & e) {}
}

int	main()
{
	Base* test = NULL;
	test = generate();
	std::cout << BOLDYELLOW << "---- by address ----\n" << BOLDWHITE;
	identify(test);
	std::cout << BOLDYELLOW << "------ by ref ------\n" << BOLDWHITE;
	identify(*test);
}