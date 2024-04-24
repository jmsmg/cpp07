#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T		*_ptr;
		size_t	_size;

	public:
		Array() : _ptr(new T), _size(0)
		{
		};

		Array(size_t n) : _ptr(new T[n]), _size(n)
		{
			if (!n)
				return ;
			for (size_t i = 0; i < n; i++)
			{
				this->_ptr[i] = 0;
			}
		};

		Array(const Array &array) 
		{
			this->_ptr = new T[array.getSize()];

			for (size_t i = 0; i < array.getSize(); i++)
			{
				this->_ptr[i] = array[i];
			}
			this->_size = array.getSize();
		}

		Array	&operator=(const Array &array)
		{
			if (this == &array)
			{
				return (*this);
			}
			delete[] (this->_ptr);
			this->_ptr = new T[array.getSize()];

			for (size_t i = 0; i < array.getSize(); i++)
			{
				this->_ptr[i] = array[i];
			}
			this->_size = array.getSize();
			return (*this);
		};

		const T	&operator[](size_t l) const throw (std::out_of_range)
		{
			if (this->_size <= l)
				throw std::out_of_range("Array index out of range");
			return (this->_ptr[l]);
		}

		T	&operator[](size_t l) throw (std::out_of_range)
		{
			if (this->_size <= l)
				throw std::out_of_range("Array index out of range");
			return (this->_ptr[l]);
		}

		~Array()
		{
			delete[] this->_ptr;
		};

		size_t	getSize() const
		{
			return (this->_size);
		};
};

#endif