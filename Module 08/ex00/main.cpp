#include "easyfind.hpp"

int	main()
{
	std::list<int>		lst;
	std::vector<int>	vc;
	std::deque<int>		dq;

	for (int i = 0; i < 5; i++) {
		vc.push_back(i + i);
		lst.push_back(i + i);
		dq.push_back(i + i);
	}
	try {
		easyfind(lst, 6);
		easyfind(lst, 27);
	}
	catch(std::exception & e){
		std::cout << BOLDRED << e.what() << DEFAULT << std::endl;
	}
	try {
		easyfind(vc, 8);
		easyfind(vc, 21);
	}
	catch(std::exception & e){
		std::cout << BOLDRED << e.what() << DEFAULT << std::endl;
	}
	try {
		easyfind(dq, 2);
		easyfind(dq, 31);
	}
	catch(std::exception & e){
		std::cout << BOLDRED << e.what() << DEFAULT << std::endl;
	}
	
	return 0;
	// std::vector<int>	arr[] =  {14, 24, 53, 78, 90};

}