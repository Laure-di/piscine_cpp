/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:45:14 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/15 15:57:21 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const& copy);
		Animal& operator=(const Animal& af);
		virtual ~Animal(void);

		std::string	getType(void)const;
		void	setType(std::string type);

		virtual void	makeSound(void)const;
};
