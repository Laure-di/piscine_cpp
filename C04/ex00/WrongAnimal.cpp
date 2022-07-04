/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:14:27 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/14 18:32:21 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("Animal")
{
	std::cout << "WrongAnimal's Constructor() called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	std::cout << "WrongAnimal's Constructor(type) called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy): _type(copy._type)
{
	std::cout << "WrongAnimal's Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << "WrongAnimal's Copy assignment operator called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal's Destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void	WrongAnimal::makeSound(void)const
{
	std::cout << "WrongAnimal's is making a weird noise" << std::endl;
}
