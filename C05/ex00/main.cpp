/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:05:54 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/16 19:40:10 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat*	sbire1 = new Bureaucrat();
	Bureaucrat*	sbire3;
	Bureaucrat* sbire4 = new Bureaucrat("Tony");
	int			gradeSbire3 = 5;
	int			gradeSbire1 = -1;

	try
	{
		sbire3 = new Bureaucrat("John", gradeSbire3);
		std::cout << *sbire1 << std::endl;
		sbire1->setGrade(gradeSbire1);
		std::cout << *sbire4 << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat sbire2;
	std::cout << sbire2 << std::endl;
	std::cout << *sbire3 << std::endl;
	sbire2 = *sbire3;
	std::cout << *sbire3 << std::endl;
	std::cout << sbire2 << std::endl;
	try
	{
		std::cout << "Before increment" << std::endl;
		std::cout << *sbire1 << std::endl;
		sbire1->incrementGrade();
		sbire1->incrementGrade();
		std::cout << "After two incrementations" << std::endl;
		std::cout << *sbire1 << std::endl;
		std::cout << "Before decrement" << std::endl;
		std::cout << *sbire1 << std::endl;
		sbire1->decrementGrade();
		sbire1->decrementGrade();
		std::cout << "After two decrements" << std::endl;
		std::cout << *sbire1 << std::endl;
		std::cout << "Another increment which should not be working" << std::endl;
		sbire1->decrementGrade();
		std::cout << *sbire1 << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete sbire1;
	delete sbire3;
	delete sbire4;
	return (0);
}
