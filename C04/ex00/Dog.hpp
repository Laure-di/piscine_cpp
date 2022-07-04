/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:11:09 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/14 23:34:07 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(std::string type);
		Dog(Dog const& copy);
		Dog& operator=(const Dog& af);
		~Dog(void);

		void	makeSound(void)const;
};
