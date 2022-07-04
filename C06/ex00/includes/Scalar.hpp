/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:38:49 by lauremass         #+#    #+#             */
/*   Updated: 2022/07/02 11:58:58 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
#include <cfloat>
#include <cctype>
#include <climits>
#include <cstdlib>


class Scalar
{
	private:
		char		_charConversion;
		int			_intConversion;
		float		_floatConversion;
		double		_doubleConversion;
		double		_atofRslt;
		std::string	_str;

	public:
		Scalar(char *input);
		Scalar(Scalar const& copy);
		~Scalar();

		Scalar&	operator=(Scalar const &af);

		//GETTER

		char	getCharConversion(void)const;
		int		getIntConversion(void)const;
		float	getFloatConversion(void)const;
		double	getDoubleConversion(void)const;

		//SETTER

		void	setCharConversion(double atofRslt);
		void	setIntConversion(double atofRslt);
		void	setFloatConversion(double atofRslt);
		void	setDoubleConversion(double atofRslt);

		void	printCharConversion(std::ostream& flux)const;
		void	printIntConversion(std::ostream& flux)const;
		void	printFloatConversion(std::ostream& flux)const;
		void	printDoubleConversion(std::ostream& flux)const;

		class	WrongArgumentException : public std::exception{
			public:
				const char *what() const throw()
				{
					return ("Argument invalid");
				}
		};
};

std::ostream& operator<<(std::ostream& flux, Scalar const &rhs);
