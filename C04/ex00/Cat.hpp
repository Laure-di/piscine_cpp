/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:11:09 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/14 23:33:03 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(std::string type);
		Cat(Cat const& copy);
		Cat& operator=(const Cat& af);
		~Cat(void);

		void	makeSound(void)const;
};
