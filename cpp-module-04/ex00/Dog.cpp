/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:28:42 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/30 00:41:47 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


// constructor

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}


// copy constructor

Dog::Dog(Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}


// copy assignment operator

Dog	&Dog::operator=(Dog &copy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = copy.type;
	return (*this);
}


// destructor

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}


// getters

std::string	Dog::getType() const
{
	return (this->type);
}


// member functions

void		Dog::makeSound() const
{
	std::cout << "*Wuff*" << std::endl;
}
