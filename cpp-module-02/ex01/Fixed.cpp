/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 18:19:04 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/16 20:51:06 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int	Fixed::fract_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fp_number = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->fp_number = value << this->fract_bits;
}

Fixed::Fixed(const float value)
{
	float	res = value;
	
	std::cout << "Float constructor called" << std::endl;
	for (int i = 0; i < fract_bits; i++)
		res = res * 2;
	this->fp_number = roundf(res);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fp_number = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->fp_number);	
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->fp_number = raw;
}

float	Fixed::toFloat() const
{
	float	res = this->fp_number;
	
	for (int i = 0; i < fract_bits; i++)
		res = res * 0.5;
	return (res);
}

int	Fixed::toInt() const
{
	return (roundf(this->fp_number >> this->fract_bits));
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}
