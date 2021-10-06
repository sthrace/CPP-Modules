#include "span.hpp"

Span::Span(void) : N(0) {
	vc.push_back(0);
}

Span::Span(uint arg) : N(arg) {	vc.reserve(N); }

Span::Span(const Span &source) { *this = source; }

Span::~Span() {}

Span	&Span::operator=(const Span &source) {
	if (this != &source) {
		N = source.N;
		for (uint i = 0; i < N; i++) {
			vc[i] = source.vc[i];
		}
	}
	return *this;
}

void	Span::addNumber(int nbr) { 
	if (vc.size() < N)
		vc.push_back(nbr); 
	else
		throw CapacityLimitReached();
}

int	Span::shortestSpan(void) {
	if (vc.size() < 2)
		throw TooFewElements();
	std::sort(vc.begin(), vc.end());	
	int minSpan = vc[1] - vc[0];
	for (uint i = 1; i < vc.size(); i++) {
		if ((vc[i] - vc[i - 1]) < minSpan) 
			minSpan = (vc[i] - vc[i - 1]);
	}
	return minSpan;
}

int	Span::longestSpan(void) { 
	return (*std::max_element(vc.begin(), vc.end()) - *std::min_element(vc.begin(), vc.end())); }

const char *Span::CapacityLimitReached::what() const throw() {
	return "Vector capacity limit reached";
}

const char *Span::TooFewElements::what() const throw() {
	return "Vector does not contain enough elements";
}
