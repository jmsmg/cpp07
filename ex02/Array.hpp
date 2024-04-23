#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T, size_t N>
class Array
{
	private:
		T		*_ptr;
		size_t	_size;

	public:
		Array();
		Array(size_t len);
		Array(const Array &array)
		Array	&operator=(const Array &array);
		~Array();
		size_t	getSize() const;
};

#endif