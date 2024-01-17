/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:53:41 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/16 23:52:42 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int	Fixed::fract_bits = 8;


// constructors & destructor

Fixed::Fixed()
{
	this->fp_number = 0;
}

Fixed::Fixed(const int value)
{
	this->fp_number = value << this->fract_bits;
}

Fixed::Fixed(const float value)
{
	float	res = value;
	
	for (int i = 0; i < this->fract_bits; i++)
		res = res * 2;
	this->fp_number = roundf(res);
}

Fixed::~Fixed()
{
}


// copy constructor

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}


// copy assignment operator

Fixed &Fixed::operator=(const Fixed &copy)
{
	this->fp_number = copy.getRawBits();
	return (*this);
}


// member functions

int	Fixed::getRawBits( void ) const
{
	return (this->fp_number);	
}

void	Fixed::setRawBits(int const raw)
{
	this->fp_number = raw;
}

float	Fixed::toFloat() const
{
	float	res = this->fp_number;
	
	for (int i = 0; i < this->fract_bits; i++)
		res = res * 0.5;
	return (res);
}

int	Fixed::toInt() const
{
	return (roundf(this->fp_number >> this->fract_bits));
}


// insertion (<<) operator

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}


// comparison operators

int		Fixed::operator>(Fixed const &fxd) const
{
	return (this->fp_number > fxd.fp_number);
}

int		Fixed::operator<(Fixed const &fxd) const
{
	return (this->fp_number < fxd.fp_number);
}

int		Fixed::operator>=(Fixed const &fxd) const
{
	return (this->fp_number >= fxd.fp_number);
}

int		Fixed::operator<=(Fixed const &fxd) const
{
	return (this->fp_number <= fxd.fp_number);
}

int		Fixed::operator==(Fixed const &fxd) const
{
	return (this->fp_number == fxd.fp_number);
}

int		Fixed::operator!=(Fixed const &fxd) const
{
	return (this->fp_number != fxd.fp_number);
}


// arithmetic operators

Fixed Fixed::operator+(Fixed const &fxd) const
{
	Fixed	ret;
	
	ret.setRawBits(this->fp_number + fxd.fp_number);
	return (ret);
}

Fixed Fixed::operator-(Fixed const &fxd) const
{
	Fixed	ret;
	
	ret.setRawBits(this->fp_number - fxd.fp_number);
	return (ret);
}

Fixed Fixed::operator*(Fixed const &fxd) const
{
	Fixed		ret;
	long long	result = 0;
	
	result = this->fp_number;
	result = result * (long long)(fxd.fp_number);
	result = result >> this->fract_bits;
	ret.setRawBits((int(result)));
	return (ret);
}

Fixed Fixed::operator/(Fixed const &fxd) const
{
	Fixed		ret;
	long long	result = 0;
	
	result = this->fp_number;
	result = result << this->fract_bits;
	result = result / fxd.fp_number;
	ret.setRawBits((int(result)));
	return (ret);
}


// increment / decrement

	//pre
Fixed	&Fixed::operator++(void)
{
	this->fp_number++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->fp_number--;
	return (*this);
}

	//post
Fixed	Fixed::operator++(int)
{
	Fixed	ret = *this;
	
	this->fp_number++;
	return (ret);
}

Fixed	Fixed::operator--(int)
{
	Fixed	ret = *this;
	
	this->fp_number--;
	return (ret);
}


// some more member functions

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed &min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return a;
	return b;
}
