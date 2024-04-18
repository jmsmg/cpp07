#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename T>
void	iter(T *array, size_t len, void (*f)(T &))
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		f(array[i]);
		i++;
	}
	std::cout << std::endl;
}

template <typename T>
void	f(T &temp)
{
	std::cout << temp << " ";
}

#endif