/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:47:24 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/14 23:56:42 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(void): Animal()
{
        this->_type = "Dog";
	std::cout << "Dog's Constructor() called" << std::endl;
}

Dog::Dog(std::string type): Animal(type)
{
	std::cout << "Dog's Constructor(type) called" << std::endl;
}

Dog::Dog(Dog const& copy): Animal(copy)
{
	std::cout << "Dog's Copy constructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	Animal::operator=(rhs);
	std::cout << "Dog's Copy constructor operator called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog's Destructor called" << std::endl;
}

void	Dog::makeSound(void)const
{
	std::cout << "Dog is barking" << std::endl;
}
