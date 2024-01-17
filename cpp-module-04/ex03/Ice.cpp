/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:30:10 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/18 12:07:46 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// constructor
Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice's default constructor called" << std::endl;
}

// copy constructor
Ice::Ice(Ice &copy): AMateria(copy.getType())
{
	std::cout << "Ice's copy constructor called" << std::endl;
}

// copy assignment operator
Ice	&Ice::operator=(Ice &copy)
{
	if (this != &copy)
		const_cast<std::string&>(this->type) = copy.type;
	std::cout << "Ice's copy assignment operator called" << std::endl;
	return (*this);
}

// destructor
Ice::~Ice()
{
	std::cout << "Ice's destructor called" << std::endl;
}

// others
Ice	*Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
