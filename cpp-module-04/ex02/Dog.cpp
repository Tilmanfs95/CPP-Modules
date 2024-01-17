/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:28:42 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/30 23:06:30 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


// constructor

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}


// copy constructor

Dog::Dog(Dog &copy) : AAnimal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = copy.getType();
	this->brain = new Brain(*copy.getBrain());
}


// copy assignment operator

Dog	&Dog::operator=(Dog &copy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = copy.getType();
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*copy.getBrain());
	return (*this);
}


// destructor

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}


// getters

std::string	Dog::getType() const
{
	return (this->type);
}

Brain		*Dog::getBrain()
{
	return (this->brain);
}


// member functions

void		Dog::makeSound() const
{
	std::cout << "*Wuff*" << std::endl;
}
