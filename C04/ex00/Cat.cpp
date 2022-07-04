/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:47:24 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/15 00:03:43 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void): Animal()
{
        this->_type = "Cat";
	std::cout << "Cat's Constructor() called" << std::endl;
}

Cat::Cat(std::string type): Animal(type)
{
	std::cout << "Cat's Constructor(type) called" << std::endl;
}

Cat::Cat(Cat const& copy): Animal(copy)
{
	std::cout << "Cat's Copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	Animal::operator=(rhs);
	std::cout << "Cat's Copy constructor operator called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat's Destructor called" << std::endl;
}

void	Cat::makeSound(void)const
{
	std::cout << "Cat is meowing" << std::endl;
}
