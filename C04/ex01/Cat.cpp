/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:47:24 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/15 17:19:25 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat(void): Animal()
{
	this->_type = "Cat";
	this->_brainCat = new Brain();
	std::cout << "Cat's Constructor() called" << std::endl;
}

Cat::Cat(std::string type): Animal(type)
{
	this->_brainCat = new Brain();
	std::cout << "Cat's Constructor(type) called" << std::endl;
}

Cat::Cat(Cat const& copy): Animal(copy)
{
	this->_brainCat = new Brain(*copy._brainCat);
	std::cout << "Cat's Copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete this->_brainCat;
		this->_brainCat = new Brain(*rhs._brainCat);
	}
	std::cout << "Cat's Copy constructor operator called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	delete this->_brainCat;
	std::cout << "Cat's Destructor called" << std::endl;
}

Brain*	Cat::getBrainCat(void)const
{
	return (this->_brainCat);
}

void	Cat::makeSound(void)const
{
	std::cout << "Cat is meowing" << std::endl;
}
