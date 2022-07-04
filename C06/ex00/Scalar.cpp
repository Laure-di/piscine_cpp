/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lauremasson <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:40:03 by lauremass         #+#    #+#             */
/*   Updated: 2022/07/03 14:37:55 by lauremass        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Scalar.hpp"

bool	digit_format_wrong(char *input)
{
	std::string check(input);
	int	end(check.size() - 1);
	int	i(0);
	bool		point(false);

	if (check[end] == 'f' && check.find(".") != std::string::npos)
		end--;
	if (check[i] == '+' || check[i] == '-')
		i++;
	for (int j = i ; j <= end; j++)
	{
		if ((!('0' <= check[j] && check[j] <= '9' ) && check[j] != '.') || (check[j] == '.' && point != false))
			return (true);
		if (check[j] == '.')
			point = true;
	}
	return (false);
}

bool	checkWrongArgument(char *input)
{
	if (std::isprint(input[0]) && input[1] == '\0')
		return (false);
	if (digit_format_wrong(input))
		return (true);
	return (false);
}

Scalar::Scalar(char *input)
{
	this->_str = input;
	if (this->_str.size() == 1 && std::isprint(input[0]))
	{
		if (std::isdigit(this->_str[0]))
			this->_atofRslt = static_cast<double>(strtol(input,NULL, 10));
		else
			this->_atofRslt = static_cast<double>(this->_str[0]);
	}
	else
		this->_atofRslt = atof(input);
	if (checkWrongArgument(input) && !std::isnan(this->_atofRslt) && !std::isinf(this->_atofRslt))
		throw WrongArgumentException();
	this->_charConversion = static_cast<char>(this->_atofRslt);
	this->_intConversion = static_cast<int>(this->_atofRslt);//max int && min int??!!
	this->_floatConversion = static_cast<float>(this->_atofRslt);//max float && min float
	this->_doubleConversion = this->_atofRslt;
}

Scalar::Scalar(Scalar const& copy): _charConversion(copy._charConversion), _intConversion(copy._intConversion), _floatConversion(copy._floatConversion), _doubleConversion(copy._doubleConversion), _atofRslt(copy._atofRslt), _str(copy._str)
{
}

Scalar::~Scalar(void)
{}

Scalar&	Scalar::operator=(const Scalar& af)
{
	if (this != &af)
	{
		this->_charConversion = af._charConversion;
		this->_intConversion = af._intConversion;
		this->_charConversion = af._floatConversion;
		this->_charConversion = af._doubleConversion;
		this->_atofRslt = af._atofRslt;
		this->_str = af._str;
	}
	return (*this);
}

char	Scalar::getCharConversion(void)const
{
	return (this->_charConversion);
}

int		Scalar::getIntConversion(void)const
{
	return (this->_intConversion);
}

float	Scalar::getFloatConversion(void)const
{
	return (this->_floatConversion);
}

double	Scalar::getDoubleConversion(void)const
{
	return (this->_doubleConversion);
}

void	Scalar::setCharConversion(double atofRslt)
{
	this->_charConversion = static_cast<char>(atofRslt);
}

void	Scalar::setIntConversion(double atofRslt)
{
	this->_intConversion = static_cast<int>(atofRslt);
}

void	Scalar::setFloatConversion(double atofRslt)
{
	this->_floatConversion = static_cast<float>(atofRslt);
}

void	Scalar::setDoubleConversion(double atofRslt)
{
	this->_doubleConversion = atofRslt;
}

void	Scalar::printCharConversion(std::ostream& flux)const
{
	flux << "char: ";
	if (std::isnan(this->_atofRslt) || std::isinf(this->_atofRslt)) //TODO max et min a checker
		flux << "impossible" << std::endl;
	else if (!std::isprint(this->_charConversion))
		flux << "Non displayable" << std::endl;
	else
		flux << "'" << this->_charConversion << "'" << std::endl;
}

void	Scalar::printIntConversion(std::ostream& flux)const
{
	flux << "int: ";
	if (std::isnan(this->_atofRslt) || std::isinf(this->_atofRslt) || (this->_atofRslt < INT_MIN && this->_atofRslt > INT_MAX))
		flux << "impossible" << std::endl;
	else
		flux << this->_intConversion << std::endl;
}

void	manageFormat(std::ostream& flux, double atofRslt)
{

	if (fmod(atofRslt, 1.0) == 0.0)
		flux << ".0";
}


void	Scalar::printFloatConversion(std::ostream& flux)const
{
	flux << "float: ";
	flux << this->_floatConversion;
	if (!std::isnan(this->_atofRslt) && !std::isinf(this->_atofRslt))
		manageFormat(flux, this->_atofRslt);
	flux << 'f';
	flux << std::endl;

}

void	Scalar::printDoubleConversion(std::ostream& flux)const
{
	flux << "double: ";
	flux << this->_doubleConversion;
	if (!std::isnan(this->_atofRslt) && !std::isinf(this->_atofRslt))
		manageFormat(flux, this->_atofRslt);
	flux << std::endl;
}

std::ostream& operator<<(std::ostream& flux, Scalar const &scalar)
{
	scalar.printCharConversion(flux); // check +inff and -inff impossible
	scalar.printIntConversion(flux);
	scalar.printFloatConversion(flux);
	scalar.printDoubleConversion(flux);
	return (flux);
}
