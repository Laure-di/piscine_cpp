/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:47:24 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/15 00:02:05 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
        this->_type = "WrongCat";
	std::cout << "WrongCat's Constructor() called" << std::endl;
}

WrongCat::WrongCat(std::string type): WrongAnimal(type)
{
	std::cout << "WrongCat's Constructor(type) called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& copy): WrongAnimal(copy)
{
	std::cout << "WrongCat's Copy constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	WrongAnimal::operator=(rhs);
	std::cout << "WrongCat's Copy constructor operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat's Destructor called" << std::endl;
}

void	WrongCat::makeSound(void)const
{
	std::cout << "WrongCat meow" << std::endl;
}
