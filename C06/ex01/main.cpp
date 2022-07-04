/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:30:57 by lauremass         #+#    #+#             */
/*   Updated: 2022/07/03 17:02:43 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Data.hpp"

int		main(void)
{
	Data *data = new Data(10, 42.58, "coucou");
	std::cout << *data;
	std::cout << data << std::endl;
	uintptr_t	serializeData = serialize(data);
	Data		*deserializeData = deserialize(serializeData);
	std::cout << *deserializeData;
	std::cout << deserializeData;
	delete data;
	return (0);
}
