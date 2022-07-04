/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 17:26:21 by lauremass         #+#    #+#             */
/*   Updated: 2022/06/15 17:26:28 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(AAnimal const& copy);
		AAnimal& operator=(const AAnimal& af);
		virtual ~AAnimal(void);

		std::string	getType(void)const;
		void	setType(std::string type);

		virtual void	makeSound(void)const = 0;
};
