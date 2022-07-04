/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:33:27 by lauremass         #+#    #+#             */
/*   Updated: 2022/06/15 16:49:01 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain's Constructor(void) called" << std::endl;
}

Brain::Brain(Brain const& copy)
{
	*this = copy;
	std::cout << "Brain's Copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain's Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& af)
{
	if (this != &af)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = af._ideas[i];
	}
	return (*this);
}

std::string	Brain::getIdea(int index)const
{
	return (this->_ideas[index]);
}

void	Brain::setIdea(int index, std::string idea)
{
	this->_ideas[index] = idea;
}
