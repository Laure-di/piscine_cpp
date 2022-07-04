/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:29:31 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/13 16:18:31 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("John Doe"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Constructor : an unknown ClapTrap has been created and named by default John Doe" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Constructor called : " << this->_name << " ClapTrap has been created successfully" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& copy): _name(copy._name), _hitPoint(copy._hitPoint), _energyPoint(copy._energyPoint), _attackDamage(copy._attackDamage)
{
	std::cout << "Copy constructor called successfully" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoint = rhs._hitPoint;
		this->_energyPoint = rhs._energyPoint;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoint(void) const
{
	return (this->_hitPoint);
}

unsigned int	ClapTrap::getEnergyPoint(void) const
{
	return (this->_energyPoint);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
	std::cout << "setName member function called" << std::endl;
}

void	ClapTrap::setHitPoint(int hitPoint)
{
	this->_hitPoint = hitPoint;
	std::cout << "setHitPoint member function called" << std::endl;
}

void	ClapTrap::setEnergyPoint(int energyPoint)
{
	this->_energyPoint = energyPoint;
	std::cout << "setEnergyPoint member function called" << std::endl;
}

void	ClapTrap::setAttackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
	std::cout << "setAttackDamage member function called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoint == 0)
		std::cout << this->_name << " is already dead can't do anything" << std::endl;
	else if (this->_energyPoint == 0)
		std::cout << this->_name << " is too weak to attack" << std::endl;
	else
	{
		this->_energyPoint -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint == 0)
		std::cout << this->_name << " is already dead" << std::endl;
	else if (this->_hitPoint < amount)
	{
		std::cout << "ClapTrap " << this->_name << " has been attacked, this attack cause " << this->_hitPoint << " points of damage and died" << std::endl;
		this->_hitPoint = 0;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " has been attacked, this attack cause " << amount << " points of damage" << std::endl;
		this->_hitPoint -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoint == 0)
		std::cout << this->_name << " is already dead can't do anything" << std::endl;
	else if (this->_energyPoint == 0)
		std::cout << this->_name << " is too weak to be repaired" << std::endl;
	else
	{
		this->_energyPoint -= 1;
		this->_hitPoint += amount;
		std::cout << this->_name << " has be repaired and now have " << this->_hitPoint << " hit points" << std::endl;
	}

}
