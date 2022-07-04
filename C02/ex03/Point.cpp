/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:25:30 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/10 12:13:14 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(float const x, float const y): _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(Point const& copy):_x(copy._x), _y(copy._y)
{
}

Point&	Point::operator=(const Point& af)
{
	(void)af;
	return (*this);
}

Point::~Point(void)
{
}

Fixed const	Point::getX(void) const
{
	return (this->_x);
}

Fixed const	Point::getY(void) const
{
	return (this->_y);
}

float		position(Point const v1, Point const v2, Point const point)
{
	return ((v1.getX().toFloat() - point.getX().toFloat()) * (v2.getY().toFloat() - point.getY().toFloat()) - (v1.getY().toFloat() - point.getY().toFloat()) * (v2.getX().toFloat() - point.getX().toFloat()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	abis;
	float	bbis;
	float	cbis;

	abis = position(a, b, point);
	bbis = position(b, c, point);
	cbis = position(c, a, point);
	if ((0 <= abis && 0 <= bbis && 0 <= cbis) || (abis <= 0 && bbis <= 0 && cbis <= 0))
		return (true);
	return (false);
}

