/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:20:52 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/13 20:43:24 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	protected: //private child can access

	std::string	_name;
	unsigned int			_hitPoint;
	unsigned int			_energyPoint;
	unsigned int			_attackDamage;

	public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& copy);
	ClapTrap& operator=(const ClapTrap& af);
	~ClapTrap(void);

	std::string				getName(void) const;
	unsigned int			getHitPoint(void) const;
	unsigned int			getEnergyPoint(void) const;
	unsigned int			getAttackDamage(void) const;

	void		setName(std::string name);
	void		setHitPoint(int hitPoint);
	void		setEnergyPoint(int energyPoint);
	void		setAttackDamage(int attackDamage);

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
