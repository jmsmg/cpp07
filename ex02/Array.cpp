#include "Array.hpp"

template <typename T, size_t N>
Array<T, N>::Array() : _ptr(NULL), _size(0)
{
}

template <typename T, size_t N>
Array<T, N>::Array(size_t len)
{
	if (!len)
	{
		Array();
		return ;
	}

	this->_ptr = new T[N];
	this->_size = len;
}

template <typename T, size_t N>
Array<T, N>::Array(const Array &array)
{
	if (this->getSize())
	{
		delete this->_ptr;
	}

	if (this != &array)
	{
		this->_size = array.getSize();
		if (this->_size == 0)
		{
			this->_ptr = NULL;
		}
		else
		{
			this->_ptr = new T[N];
		}
		for (size_t i = 0; i < N, i++)
		{
			this->_ptr[i] = array._ptr[i];
		}
	}
}

template <typename T, size_t N>
Array<T, N> &Array<T, N>::operator=(const Array &array)
{

}

template <typename T, size_t N>
size_t	Array<T, N>::getSize() const
{
	return (this->_size);
}