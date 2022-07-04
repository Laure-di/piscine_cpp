/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:56:31 by lmasson           #+#    #+#             */
/*   Updated: 2022/05/31 19:05:21 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const raw)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = (raw << nbb);
}

Fixed::Fixed(float const raw)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = (int)roundf(raw * (1 << nbb));
}

Fixed::Fixed(Fixed const& copy): _value(copy._value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	this->_value = rhs._value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	std::cout << "setRawsBits member function called" << std::endl;
}

int	Fixed::toInt(void) const
{
	return (this->_value >> nbb);
}

float Fixed::toFloat(void) const
{
	return (float(this->_value) / (1 << nbb));
}

std::ostream& operator<<(std::ostream& o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
