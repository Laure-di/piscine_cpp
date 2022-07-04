/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:02:25 by lauremass         #+#    #+#             */
/*   Updated: 2022/07/03 16:45:57 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Scalar.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "The correct use of the function is : ./conver \"char/int/double/float\"" << std::endl;
		return (1);
	}
	try
	{
		Scalar scalar(argv[1]);
		std::cout << scalar;
	}
	catch (Scalar::WrongArgumentException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	/*const char *nan("\0");
	char c('*');
	double	i(0);
	i = atof(nan);
	c = static_cast<char>(i);

	std::cout << i << std::endl;
	std::cout << c << std::endl;*/
	return (0);
}
