/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:35:21 by lauremass         #+#    #+#             */
/*   Updated: 2022/07/03 19:08:59 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

void	swap(T& a, T& b)
{
	T temp = a;

	a = b;
	b = temp;
}

template <typename T>

T const&	min(const T& a, const T& b)
{
	if (b <= a)
		return (b);
	else
		return (a);
}

template <typename T>

T const&	max(const T& a, const T& b)
{
	if (a <= b)
		return (b);
	else
		return (a);
}
