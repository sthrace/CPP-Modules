#include "span.hpp"

int	main()
{
	Span *test = new Span(10);

	test->addNumber(10);
	test->addNumber(20);
	test->addNumber(2);
	try {
		std::cout << test->longestSpan() << std::endl;
	std::cout << test->shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << BOLDRED << e.what() << DEFAULT << std::endl;
	}

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}