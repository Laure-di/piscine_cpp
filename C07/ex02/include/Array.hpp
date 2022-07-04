/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:35:26 by lauremass         #+#    #+#             */
/*   Updated: 2022/07/04 13:26:49 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <class T>

class Array
{
	private:
		unsigned int		_size;
		T		*_array;
	public:
		Array(void): _size(0), _array(new T[0]){};
		Array(int size): _size(size), _array(new T[size]){};
		Array(const Array &copy){
			this->_size = copy._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = copy._array[i];
		}
		Array& operator=(const Array& af)
		{
			if (this != &af)
			{
				this->_size = af._size;
				if (this->_array)
					delete [] this->_array;
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = af._array[i];
			}
			return (*this);
		}
		~Array(void){
			delete [] this->_array;
		}
		class	WrongIndexException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("The index you've pick up is out of range");
			}
	};
		T&	operator[](unsigned int index)
		{
			if (this->_size <= index)
				throw WrongIndexException();
			return (this->_array[index]);
		}
		T operator[](unsigned int index)const
		{
			if (this->_size <= index)
				throw WrongIndexException();
			return (this->_array[index]);
		}
		unsigned int	size(void)const
		{
			return (this->_size);
		}

};
