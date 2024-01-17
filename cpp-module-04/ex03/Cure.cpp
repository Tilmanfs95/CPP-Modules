/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:05:42 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/18 12:16:26 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// constructor
Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure's default constructor called" << std::endl;
}

// copy constructor
Cure::Cure(Cure &copy): AMateria(copy.getType())
{
	std::cout << "Cure's copy constructor called" << std::endl;
}

// copy assignment operator
Cure &Cure::operator=(Cure &copy)
{
	if (this != &copy)
		const_cast<std::string&>(this->type) = copy.type;
	std::cout << "Cure's copy assignment operator called" << std::endl;
	return (*this);
}

// destructor
Cure::~Cure()
{
	std::cout << "Cure's destructor called" << std::endl;
}

// others
Cure	*Cure::clone() const
{
	return new Cure();
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}