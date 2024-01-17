/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:53:43 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/16 23:54:59 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					fp_number;
	static const int	fract_bits;
public:
	// constructors & destructor
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	// copy constructor
	Fixed(const Fixed &copy);

	// copy assignment operator
	Fixed			&operator=(const Fixed &copy);
	
	// member functions
	int					getRawBits( void ) const;
	void				setRawBits( int const raw );
	float				toFloat( void ) const;
	int					toInt( void ) const;

	// comparison operators
	int					operator>(Fixed const &fxd) const;
	int					operator<(Fixed const &fxd) const;
	int					operator>=(Fixed const &fxd) const;
	int					operator<=(Fixed const &fxd) const;
	int					operator==(Fixed const &fxd) const;
	int					operator!=(Fixed const &fxd) const;

	// arithmetic operators
	Fixed				operator+(Fixed const &fxd) const;
	Fixed				operator-(Fixed const &fxd) const;
	Fixed				operator*(Fixed const &fxd) const;
	Fixed				operator/(Fixed const &fxd) const;

	// increment / decrement
		//pre
	Fixed				&operator++(void);
	Fixed				&operator--(void);
		//post
	Fixed				operator++(int);
	Fixed				operator--(int);

	// some more member functions
	static Fixed		&min(Fixed &a, Fixed &b);
	static const		Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const		Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif
