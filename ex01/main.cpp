#include "iter.hpp"

int	main()
{
	int			array[100];
	std::string	str[2] = {"hello"," world"};

	for (int i = 0; i < 100; i++)
	{
		array[i] = i;
	}
	iter(array, 100, f);
	iter(str, 2, f);
}