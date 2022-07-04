/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:56:31 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/11 16:04:25 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _value(0)
{
}

Fixed::Fixed(int const raw)
{
	this->_value = (raw << nbb);
}

Fixed::Fixed(float const raw)
{
	this->_value = (int)roundf(raw * (1 << nbb));
}

Fixed::Fixed(Fixed const& copy): _value(copy._value)
{
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
	this->_value = rhs._value;
	return (*this);
}

Fixed::~Fixed(void)
{
}

bool	Fixed::operator==(const Fixed& rhs)
{
	if (this->_value == rhs._value)
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed& rhs)
{
	if (this->_value > rhs._value)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& rhs)
{
	if (this->_value < rhs._value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& rhs)
{
	if (this->_value >= rhs._value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& rhs)
{
	if (this->_value <= rhs._value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& rhs)
{
	if (this->_value != rhs._value)
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed& rhs)
{
	Fixed	result;

	result.setRawBits((this->_value + rhs._value));
	return (result);
}

Fixed	Fixed::operator-(const Fixed& rhs)
{
	Fixed	result;

	result.setRawBits((this->_value - rhs._value));
	return (result);
}

Fixed	Fixed::operator/(const Fixed& rhs)
{
	Fixed	result;

	result.setRawBits((this->_value * (1 << nbb)) / rhs._value);
	return (result);
}

Fixed	Fixed::operator*(const Fixed& rhs)
{
	Fixed	result;

	result.setRawBits((this->_value * rhs._value >> nbb));
	return (result);
}

Fixed&	Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int add)
{
	Fixed	result;

	result = *this;
	if (add != 0)
		_value += add;
	else
		++*this;
	return (result);
}

Fixed	Fixed::operator--(int add)
{
	Fixed result;

	result = *this;
	if (add != 0)
		_value -= add;
	else
		--*this;
	return (result);
}

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
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

Fixed&	Fixed::min(Fixed& one, Fixed& two)
{
	if (one < two)
		return (one);
	return (two);
}

const Fixed&	Fixed::min(const Fixed& one, const Fixed& two)
{
	if (one.getRawBits() < two.getRawBits())
		return (one);
	return (two);
}

Fixed&	Fixed::max(Fixed& one, Fixed& two)
{
	if (one > two)
		return (one);
	return (two);
}

const Fixed&	Fixed::max(const Fixed& one, const Fixed& two)
{
	if (one.getRawBits() > two.getRawBits())
		return (one);
	return (two);
}
