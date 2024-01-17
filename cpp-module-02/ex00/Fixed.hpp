/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:43:26 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/15 17:51:00 by tfriedri         ###   ########.fr       */
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
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed	&operator=(const Fixed &copy);
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
