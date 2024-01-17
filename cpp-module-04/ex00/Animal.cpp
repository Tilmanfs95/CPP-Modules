/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:58:13 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/11 15:49:35 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// constructor

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}


// copy constructor

Animal::Animal(Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}


// copy assignment operator

Animal	&Animal::operator=(Animal &copy)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->type = copy.type;
	return (*this);
}



// destructor

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}


// member functions

std::string	Animal::getType() const
{
	return (this->type);
}

void		Animal::makeSound() const
{
	std::cout << "*rrkkkdwsfvnu* WTF?! This was a really weird Animals-noise!" << std::endl;
}
