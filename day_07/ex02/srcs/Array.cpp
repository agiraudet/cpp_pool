/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <agiraude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:41:28 by agiraude          #+#    #+#             */
/*   Updated: 2022/09/27 11:06:09 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void)
: _ptr(NULL), _size(0)
{
	return ;
}

template<typename T>
Array<T>::Array(unsigned int n)
:_size(n)
{
	this->_ptr = new T[n];
	for (size_t i = 0; i < this->_size; i++)
		this->_ptr[i] = 0;
}

template<typename T>
Array<T>::Array(Array const & src)
{
	this->_ptr = new T[src.size()];
	*this = src;
}

template<typename T>
Array<T>::~Array(void)
{
	if (this->_ptr)
		delete [] this->_ptr;
}

template<typename T>
Array & Array<T>::operator=(Array const & rhs)
{
	if (this->_ptr)
		delete [] this->_ptr;
	this->_ptr = new T[rhs._size];
	std::copy(rhs._ptr, rhs._ptr + rhs._size, this->_ptr);
	return *this;
}

template<typename T>
Array & Array<T>::operator[](size_t i)
{
	if (i >= this->_size)
		throw std::exception;
	return this->_ptr[i];
}

template<typename T>
size_t	Array<T>::size(void) const
{
	return this->_size;
}
