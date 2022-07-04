/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:11:09 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/15 17:18:38 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain* _brainCat;
	public:
		Cat(void);
		Cat(std::string type);
		Cat(Cat const& copy);
		Cat& operator=(const Cat& af);
		~Cat(void);

		void	makeSound(void)const;
		Brain*	getBrainCat(void) const;
};
