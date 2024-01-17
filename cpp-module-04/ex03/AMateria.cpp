/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:40:24 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/12 15:45:48 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// constructors
AMateria::AMateria()
{
	std::cout << "AMateria's default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type): type(type)
{
	std::cout << "AMateria's constructor called with the type " << type << std::endl;
}

// destructor
AMateria::~AMateria()
{
	std::cout << "AMateria's destructor called" << std::endl;
}

// getters
std::string const &AMateria::getType() const
{
	return(this->type);
}

// other
void	AMateria::use(ICharacter &target)
{
	std::cout << "AMateria used on " << target.getName() << std::endl;
}
