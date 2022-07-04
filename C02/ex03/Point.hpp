/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:25:48 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/11 16:03:34 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class	Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;

	public:
		Point(void);
		Point(float const x, float const y);
		Point(Point const& copy);
		Point& operator=(const Point& af);
		~Point(void);

		Fixed const getX(void) const;
		Fixed const getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

