/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:15:15 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/14 09:26:38 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap scav1;
	ScavTrap scav2("R2D2");
	ScavTrap scav3(scav2);
	ScavTrap scav4;
	scav4 = scav2;
	unsigned int	i;

	i = 0;
	while (scav1.getEnergyPoint() != 0)
		scav1.attack("scav2");
	scav1.beRepaired(27);
	i = 0;
	scav2.takeDamage(27);
	scav2.beRepaired(27);
	while (scav2.getHitPoint() != 0)
		scav2.takeDamage(27);
	scav4.guardGate();

	return (0);
}
