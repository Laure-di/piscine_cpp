/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:58:58 by lauremass         #+#    #+#             */
/*   Updated: 2022/07/03 17:09:53 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string.h>

class Data
{
	private:
		int				_int;
		double			_double;
		std::string		_str;
		//need of other type of pointer
	public:
		Data(int nb, double ndDouble, std::string str);
		~Data(void);

		int			getInt(void)const;
		double		getDouble(void)const;
		std::string	getStr(void)const;

};

uintptr_t		serialize(Data* ptr);
Data*			deserialize(uintptr_t raw);
std::ostream&	operator<<(std::ostream& flux, Data const &data);
