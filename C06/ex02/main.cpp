/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:14:43 by lauremass         #+#    #+#             */
/*   Updated: 2022/07/03 18:12:08 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Base.hpp"
#include "includes/A.hpp"
#include "includes/B.hpp"
#include "includes/C.hpp"

Base*	generate(void)
{
	srand(time(NULL));
	int	random(rand() % 3);

	std::cout << "Create : ";
	switch(random)
	{
		case 0:
			std::cout << "A" << std::endl;
			return (new A());
		case 1:
			std::cout << "B" << std::endl;
			return (new B());
		default:
			std::cout << "C" << std::endl;
			return (new C());
	}
}

void	identify(Base* p)
{
	std::cout << "Pointer identifier find it's an instance of class: ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cerr << "No matching class" << std::endl;
}

void	identify(Base& p)
{
	std::cout << "Reference identifier find it's ans instance of class: ";
	try
	{
		if (dynamic_cast<A*>(&p))
			std::cout << "A" << std::endl;
		else if (dynamic_cast<B*>(&p))
			std::cout << "B" << std::endl;
		else if (dynamic_cast<C*>(&p))
			std::cout << "C" << std::endl;
	}
	catch(const std::exception &e)
	{
	}
}

int		main(void)
{
	Base *random = generate();
	identify(random);
	identify(*random);

	delete random;
	return (0);
}
