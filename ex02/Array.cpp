#include "Array.hpp"

template <typename T>
Array<T>::Array() : _ptr(NULL), _len(0)
{
}

template <typename T>
Array<T>::Array(size_t len) : _ptr(NULL), _len(len)
{
	if (this->_len != 0)
	{
		this->_ptr = new T[len];
	}
}

template <typename T>
Array<T>::Array(const Array &array)
{
	if (this->_len != 0)
	{
		delete this->_ptr;
	}

	this->ptr = new T[array.getLen()];
	for (int i = 0; i < array.getLen(); i++)
	{
		this->_ptr[i] = array[i];
	}
}

template <typename T>
Array	&Array<T>::operator=(const Array &array)
{

}

template <typename T>
Array<T>::~Array()
{
	delete	this->_ptr;
}
