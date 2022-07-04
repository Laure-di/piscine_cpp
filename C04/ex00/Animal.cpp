/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:14:27 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/14 23:37:18 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("Animal")
{
	std::cout << "Animal's Constructor() called" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << "Animal's Constructor(type) called" << std::endl;
}

Animal::Animal(Animal const& copy): _type(copy._type)
{
	std::cout << "Animal's Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << "Animal's Copy assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal's Destructor called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

void	Animal::makeSound(void)const
{
	std::cout << "Animal's is making a weird noise" << std::endl;
}
