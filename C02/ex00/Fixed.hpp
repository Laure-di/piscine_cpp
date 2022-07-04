/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 00:34:31 by lmasson           #+#    #+#             */
/*   Updated: 2022/05/31 16:52:13 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

#include <iostream>

class Fixed
{
	private:
		int					_value;
		static const int	nbb = 8;

	public:
		Fixed(void);
		Fixed(Fixed const& copy);
		Fixed& operator=(const Fixed& af);
		~Fixed(void);

		int		getRawBits(void)const;
		void	setRawBits(int const raw);


};

#endif
