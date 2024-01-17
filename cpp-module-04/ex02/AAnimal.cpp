/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:58:13 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/30 00:41:47 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// constructor

AAnimal::AAnimal()
{
	std::cout << "AAnimal constructor called" << std::endl;
}


// copy constructor

AAnimal::AAnimal(AAnimal &copy)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = copy;
}


// copy assignment operator

AAnimal	&AAnimal::operator=(AAnimal &copy)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	this->type = copy.type;
	return (*this);
}



// destructor

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}


// member functions

std::string	AAnimal::getType() const
{
	return (this->type);
}

// void		AAnimal::makeSound() const
// {
// 	std::cout << "*rrkkkdwsfvnu* WTF?! This was a really weird Animals-noise!" << std::endl;
// }
