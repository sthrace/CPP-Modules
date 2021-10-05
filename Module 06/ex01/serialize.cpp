#include "header.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data*		data = new Data();
	uintptr_t	serial;

	serial = serialize(data);
	std::cout << "Address: " << data << std::endl;
	std::cout << "Address int: " << serial << std::endl;
	std::cout << "Address original: " << deserialize(serial) << std::endl;

	delete data;
	return 0;
}