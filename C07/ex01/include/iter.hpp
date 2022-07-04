/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:51:52 by lauremass         #+#    #+#             */
/*   Updated: 2022/07/03 19:34:10 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

void	iter(T* array, int lenght, void (*f)(const T&))
{
	int	i(-1);

	while (++i < lenght)
		(*f)(array[i]);
}

template <typename T>

void	print(const T& array)
{
	std::cout << array << std::endl;
}

template <typename T>

void	printDouble(const T& array)
{
	std::cout << (array * 2) << std::endl;
}
