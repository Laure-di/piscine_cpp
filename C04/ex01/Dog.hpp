/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:11:09 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/16 11:04:59 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain* _brainDog;

	public:
		Dog(void);
		Dog(std::string type);
		Dog(Dog const& copy);
		Dog& operator=(const Dog& af);
		~Dog(void);

		void	makeSound(void)const;
		Brain*	getBrainDog(void)const;
};
