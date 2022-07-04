/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:23:08 by lauremass         #+#    #+#             */
/*   Updated: 2022/07/03 18:08:36 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Base
{
	public:
		Base(){}
		virtual	~Base(void){}
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

