/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:47:24 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/16 11:04:17 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog(void): Animal()
{
	this->_type = "Dog";
	this->_brainDog = new Brain();
	std::cout << "Dog's Constructor() called" << std::endl;
}

Dog::Dog(std::string type): Animal(type)
{
	this->_brainDog = new Brain();
	std::cout << "Dog's Constructor(type) called" << std::endl;
}

Dog::Dog(Dog const& copy): Animal(copy)
{
	this->_brainDog = new Brain(*copy._brainDog);
	std::cout << "Dog's Copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete this->_brainDog;
		this->_brainDog = new Brain(*rhs._brainDog);
	}
	std::cout << "Dog's Copy constructor operator called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog's Destructor called" << std::endl;
}

Brain*	Dog::getBrainDog(void)const
{
	return (this->_brainDog);
}

void	Dog::makeSound(void)const
{
	std::cout << "Dog is barking" << std::endl;
}
