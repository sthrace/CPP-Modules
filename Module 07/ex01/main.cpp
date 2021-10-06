#include "iter.hpp"
#include <string>

int	main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
		arr[i] = i + i;
	std::cout << BOLDGREEN << "Integer Array:\n";
	::iter<int>(arr, 10, print);
	std::cout << DEFAULT << "\n\n";

	float arr2[5] = {4.2f, 2.3f, 10.567f, 1.0f, 0.3f};
	std::cout << BOLDCYAN << "Float Array\n";
	::iter<float>(arr2, 5, print);
	std::cout << DEFAULT << "\n\n";

	std::string arr3[] = {"Hello", "world", "!"};
	std::cout << BOLDYELLOW << "String Array\n";
	::iter<std::string>(arr3, 3, print);
	std::cout << DEFAULT << "\n";

	return 0;
}