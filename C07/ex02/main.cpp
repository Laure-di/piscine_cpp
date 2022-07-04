/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:47:00 by lauremass         #+#    #+#             */
/*   Updated: 2022/07/04 13:33:23 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Array.hpp"

int		main(void)
{
	std::cout << "Construction with an unsigned int n as parameter Array(6)"<< std::endl;
	Array<int> intArray(6);
	std::cout << "Array of size : " << intArray.size() <<  " created!" << std::endl;
	try
	{
		srand(time(NULL));
		std::cout << "Display of array element before fillin" << std::endl;
		for (unsigned int i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << " / ";
		std::cout << std::endl;
		std::cout << "Fill in of the int array and display" << std::endl;
		for (unsigned int i = 0; i < intArray.size(); i++)
			intArray[i] = rand() % 100;
		for (unsigned int i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << " / ";
		std::cout << std::endl;
		std::cout << "Display of index 5 and after 7: (one should be display and an error should be throw after" << std::endl;
		std::cout << "Array[5] = " << intArray[5] << std::endl;
		std::cout << "Array[7] = " << intArray[7];
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Construction by copy of the previous int array" << std::endl;
		Array<int> copyArray(intArray);
		std::cout << "Display of inital array" << std::endl;
		for (unsigned int i = 0; i < intArray.size(); i++)
			std::cout << intArray[i] << " / ";
		std::cout << std::endl;
		std::cout << "Display of copy array" << std::endl;
		for (unsigned int i = 0; i < copyArray.size(); i++)
			std::cout << copyArray[i] << " / ";
		std::cout << std::endl;
		intArray[1] = 100;
		std::cout << "New value of intArray : " << intArray[1] << " The new value has not been impacted on the copy array : " << copyArray[1] << std::endl;
		copyArray[1] = 0;
		std::cout << "New value of copyArray : " << copyArray[1] << " The new value has not been impacted on the initial array : " << intArray[1] << std::endl;

	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "Construction by assignment" << std::endl;
		std::cout << "Creation of an intial array of string Array(3)" << std::endl;
		Array<std::string> strArray(3);
		std::cout << "Display of the initial content : ";
		strArray[0] = "Coucou";
		strArray[1] = " Tout fonctionne parfaitemment";
		strArray[2] = " Youhou";
		for (unsigned int i = 0; i < strArray.size(); i++)
			std::cout << strArray[i];
		std::cout << std::endl;
		std::cout << "Creation of the second string array by assignment and display" << std::endl;
		Array<std::string> strCopy;
		strCopy = strArray;
		std::cout << "inital array : ";
		for (unsigned int i = 0; i < strArray.size(); i++)
			std::cout << strArray[i];
		std::cout << std::endl;
		std::cout << "copy array : ";
		for (unsigned int i = 0; i < strCopy.size(); i++)
			std::cout << strCopy[i];
		std::cout << std::endl;
		std::cout << "Change of the index 0 element of the initial array by Hello" << std::endl;
		strArray[0] = "Hello";
		std::cout << "inital array : ";
		for (unsigned int i = 0; i < strArray.size(); i++)
			std::cout << strArray[i];
		std::cout << std::endl;
		std::cout << "copy array : ";
		for (unsigned int i = 0; i < strCopy.size(); i++)
			std::cout << strCopy[i];
		std::cout << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Construction with no parameter Array(void)" << std::endl;
		Array <char> charArray;
		std::cout << "Array of size : " << charArray.size() <<  " created!" << std::endl;
		std::cout << "Trying to access index 1 : (should send an IndexErrorException)" << std::endl;
		std::cout << "Array[1] = " << charArray[1];
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
