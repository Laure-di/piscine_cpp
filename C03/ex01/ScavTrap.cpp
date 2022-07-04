/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:40:12 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/14 09:27:16 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap's Constructor : an unknown ScavTrap has been created and named by default " << this->_name  << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap's Constructor called : " << name << " has been created successfully" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& copy): ClapTrap(copy)
{
	std::cout << "ScavTrap's copy Constructor called successfully" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& af)
{
	ClapTrap::operator=(af);
	std::cout << "ScavTrap's Copy assignment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap's Destructor called " << this->_name << " is dead" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " enter Guard Keeper mode." std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoint == 0)
		std::cout << "ScavTrap " << this->_name << " is already dead can't do anything" << std::endl;
	else if (this->_energyPoint == 0)
		std::cout << "ScavTrap " << this->_name << " is too weak to attack" << std::endl;
	else
	{
		this->_energyPoint -= 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
	}
}
