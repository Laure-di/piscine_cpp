/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:28:11 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/16 11:04:29 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Animal* animals[20];
	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
		{
			std::cout << std::endl;
			animals[i] = new Dog();
			animals[i]->makeSound();
		}
		else
		{
			std::cout << std::endl;
			animals[i] = new Cat();
			animals[i]->makeSound();
		}
	}
	for (int i = 0; i < 20; i++)
	{
		std::cout << std::endl;
		delete animals[i];
	}
	std::cout << std::endl;
	std::cout << "Test creation animaux" << std::endl;
	std::cout << std::endl;
	Cat cat;
	cat.getBrainCat()->setIdea(0, "I want treats");
	std::cout << cat.getBrainCat()->getIdea(0) << std::endl;
	std::cout << std::endl;
	Cat cat1("chaton");
	std::cout << std::endl;
	Cat cat2;
	std::cout << std::endl;
	cat2 = cat1;
	std::cout << std::endl;
	Cat cat3(cat);
	std::cout << cat3.getBrainCat()->getIdea(0) << std::endl;
	cat3.getBrainCat()->setIdea(150, "I want water");
	std::cout << cat3.getBrainCat()->getIdea(0) << std::endl;
	std::cout << cat.getBrainCat()->getIdea(0) << std::endl;
	std::cout << std::endl;
	Dog dog;
	std::cout << std::endl;
	Dog dog1("chiot");
	std::cout << std::endl;
	Dog dog2;
	std::cout << std::endl;
	dog2 = dog1;
	std::cout << std::endl;
	Dog dog3(dog);
	return 0;
}
