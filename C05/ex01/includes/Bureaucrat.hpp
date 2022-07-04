/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:30:13 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/17 01:25:34 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form;

class Bureaucrat
{
	private:
		std::string const	_name;
		int			_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name);
		Bureaucrat(int grade);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const& copy);
		~Bureaucrat(void);

		Bureaucrat& operator=(const Bureaucrat& af);
		std::string const&	getName(void)const;
		int			getGrade(void)const;
		void		setGrade(int grade);
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(Form& form)const;

		class GradeTooHighException : public std::exception{
			public:
				const char *what() const throw()
				{
					return ("Grade is too high");
				}
		};
		class GradeTooLowException : public std::exception{
			public:
				const char *what() const throw()
				{
					return ("Grade is to low");
				}
		};
};

std::ostream&	operator<<(std::ostream& flux, Bureaucrat const &rhs);
