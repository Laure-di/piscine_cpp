/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:57:04 by lauremass         #+#    #+#             */
/*   Updated: 2022/07/03 19:34:06 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/iter.hpp"

int	main(void)
{
	int	intArray[5]= {42, 66, 58, 96, 0};
	float	floatArray[7] = {0.0, 85.2, 98.2, 77.0, 12.12, 99.2, 45.3};
	std::string	strArray[4] = {"Bonjour", "Tout fonctionne!", "Ouf", "On continue"};
	std::cout << "Int array result :" << std::endl;
	iter(intArray, 5, print);
	std::cout << std::endl;
	std::cout << "Strings array result :" << std::endl;
	iter(strArray, 4, print);
	std::cout << std::endl;
	std::cout << "Float array result :" << std::endl;
	iter(floatArray, 7, print);
	std::cout << std::endl;
	std::cout << "Int array result multiply by 2 :" << std::endl;
	iter(intArray, 5, printDouble);
	std::cout << std::endl;
	std::cout << "Float array result multiply by 2 :" << std::endl;
	iter(floatArray, 7, printDouble);
}
