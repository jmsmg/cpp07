#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array
{
	private:
		T		*_ptr;
		size_t	_len;

	public:
		Array();
		Array(size_t len);
		Array(const Array &array)
		Array	&operator=(const Array &array);
		~Array();
		size_t	getLen();
};

#endif