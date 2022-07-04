/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:04:51 by lauremass         #+#    #+#             */
/*   Updated: 2022/07/03 17:09:56 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Data.hpp"

Data::Data(int nb, double intDouble, std::string str)
{
	this->_int = nb;
	this->_double = intDouble;
	this->_str = str;
}

Data::~Data(void)
{}

int		Data::getInt(void)const
{
	return (this->_int);
}

double	Data::getDouble(void)const
{
	return (this->_double);
}

std::string	Data::getStr(void)const
{
	return (this->_str);
}

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

std::ostream&	operator<<(std::ostream& flux, Data const &data)
{
	flux << "int : " << data.getInt() << std::endl;
	flux << "double : " << data.getDouble() << std::endl;
	flux << "string : " << data.getStr() << std::endl;
	return (flux);
}
