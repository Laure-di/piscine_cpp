/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:25:04 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/14 18:31:03 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const& copy);
		WrongAnimal& operator=(const WrongAnimal& af);
		~WrongAnimal(void);

		std::string	getType(void)const;
		void	setType(std::string type);

		void	makeSound(void)const;
};
