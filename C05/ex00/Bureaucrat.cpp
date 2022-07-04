/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:43:56 by lmasson           #+#    #+#             */
/*   Updated: 2022/07/04 12:44:54 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("default"), _grade(150)
{
	std::cout << "Bureaucrat's Constructor() called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name): _name(name), _grade(150)
{
	std::cout << "Bureaucrat's Constructor(name) called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade): _name("default")
{
	if (grade < 1)
		throw GradeTooHighException();
	if (150 < grade)
		throw GradeTooLowException();
	this->_grade = grade;
	std::cout << "Bureaucrat's Constructor(grade) called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (150 < grade)
		throw GradeTooLowException();
	this->_grade = grade;
	std::cout << "Bureaucrat's Constructor(name, grade) called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy): _name(copy._name), _grade(copy._grade)
{
	std::cout << "Bureaucrat's Copy constructor called" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& af)
{
	if (this != &af)
		this->_grade = af._grade;
	std::cout << "Bureaucrat's Copy assignment operator called" << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat's Destructor called" << std::endl;
}

std::string const& Bureaucrat::getName(void)const
{
	return (this->_name);
}

int		Bureaucrat::getGrade(void)const
{
	return (this->_grade);
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (150 < grade)
		throw GradeTooLowException();
	this->_grade = grade;
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

std::ostream& operator<<(std::ostream& flux, Bureaucrat const &rhs)
{
	flux << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (flux);
}
