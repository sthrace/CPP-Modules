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

template<class T>
class Array
{
	private:
		uint	_size;
		T 		*arr;
	public:
		Array(void) : arr(NULL), _size(0) {};
		Array(uint n) : _size(n) { 
			arr = new T[n]; 
			for (uint i = 0; i < n; i++)
				arr[i] = 0;
		};
		Array(const Array<T> &source) { 
			if (this != &source) {
				_size = source._size;
				arr = new T[_size]();
				for (uint i = 0; i < _size; i++)
					arr[i] = source.arr[i];
			}
		};
		~Array() { 
			delete arr; 
		};

		Array<T>	&operator=(const Array<T> &source) {
			if (this != &source) {
				if (arr)
					delete arr;
				_size = source._size;
				arr = new T[_size]();
				for (uint i = 0; i < _size; i++)
					arr[i] = source.arr[i];
			}
			return *this;
		};
		
		void	set_elem(const uint idx, T val) {
			if (idx >= _size) {
				throw OutOfBoundsException();
			}
			arr[idx] = val;
		}

		T		get_elem(const uint idx) const {
			if (idx >= _size) {
				throw OutOfBoundsException();
			}
			return arr[idx];
		}

		T	&operator[](const uint idx) {
			if (idx >= _size)
				throw OutOfBoundsException();
			return arr[idx];
		}

		class OutOfBoundsException : public std::exception {
			virtual const char* what() const throw() { return "Element is out of bounds"; } ; };
};