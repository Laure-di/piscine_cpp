/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:08:37 by lmasson           #+#    #+#             */
/*   Updated: 2022/06/17 01:25:08 by lmasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeSigned;
		int const			_gradeExec;

	public:
		Form(void);
		Form(std::string name, int gradeSigned, int gradeExec);
		Form(Form const& copy);
		~Form(void);

		Form&			operator=(const Form& rsh);
		std::string const& getName(void)const;
		bool			getSigned(void)const;
		int				getGradeSigned(void)const;
		int				getGradeExec(void)const;
		void			beSigned(const Bureaucrat& sbire);

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

std::ostream&	operator<<(std::ostream& flux, Form const &form);
