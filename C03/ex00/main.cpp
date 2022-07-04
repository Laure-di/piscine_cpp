/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:15:15 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/14 09:25:15 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap clap1;
	ClapTrap clap2("R2D2");
	ClapTrap clap3(clap2);
	ClapTrap clap4;
	clap4 = clap2;
	unsigned int	i;

	i = 0;
	while (clap1.getEnergyPoint() != 0)
		clap1.attack("clap2");
	clap1.beRepaired(27);
	i = 0;
	clap2.takeDamage(27);
	clap2.beRepaired(27);
	while (i++ < clap2.getHitPoint())
		clap2.takeDamage(27);
	return (0);
}

