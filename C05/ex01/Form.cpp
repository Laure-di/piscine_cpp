/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:19:10 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/17 01:17:47 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Form.hpp"
#include "includes/Bureaucrat.hpp"

Form::Form(void):_name("default"), _signed(false), _gradeSigned(150), _gradeExec(150)
{
	std::cout << "Form's Constructor() called" << std::endl;
}

Form::Form(std::string name, int gradeSigned, int gradeExec): _name(name),  _gradeSigned(gradeSigned), _gradeExec(gradeExec)
{
	if (gradeSigned < 1 || gradeExec < 1)
		throw GradeTooHighException();
	if (150 < gradeSigned || 150 < gradeExec)
		throw GradeTooLowException();
	this->_signed = false;
	std::cout << "Form's Constructor(name, signed, gradeSigned, gradeExec) called" << std::endl;
}

Form::Form(Form const& copy): _name(copy._name), _signed(copy._signed), _gradeSigned(copy._gradeSigned), _gradeExec(copy._gradeExec)
{
	std::cout << "Form's Copy constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form's Destructor called" << std::endl;
}

Form&	Form::operator=(const Form& rsh)
{
	if (this != &rsh)
		this->_signed = rsh._signed;
	std::cout << "Bureaucrat's Copy assignment operator called" << std::endl;
	return (*this);
}

std::string	const& Form::getName(void)const
{
	return (this->_name);
}

bool	Form::getSigned(void)const
{
	return (this->_signed);
}

int		Form::getGradeSigned(void)const
{
	return (this->_gradeSigned);
}

int		Form::getGradeExec(void)const
{
	return (this->_gradeExec);
}

void	Form::beSigned(const Bureaucrat& sbire)
{
	if (this->_gradeSigned < sbire.getGrade())
		throw GradeTooLowException();
	this->_signed = true;
}

std::ostream& operator<<(std::ostream& flux, Form const &rhs)
{
	flux << "Nom du formulaire : " << rhs.getName() << " Signed : " << rhs.getSigned() << " Grade needed to sign : " << rhs.getGradeSigned() << " Grade needed to execute : " << rhs.getGradeExec();
	return (flux);
}
