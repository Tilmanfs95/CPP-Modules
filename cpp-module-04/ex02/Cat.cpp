/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:41:44 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/30 23:06:21 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


// constructor

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}


// copy constructor

Cat::Cat(Cat &copy) : AAnimal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.getType();
	this->brain = new Brain(*copy.getBrain());
}


// copy assignment operator

Cat	&Cat::operator=(Cat &copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = copy.getType();
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*copy.getBrain());
	return (*this);
}


// destructor

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}


// getters

std::string Cat::getType() const
{
	return (this->type);
}

Brain		*Cat::getBrain()
{
	return (this->brain);
}


// member functions

void		Cat::makeSound() const
{
	std::cout << "*Miaaaaauu*" << std::endl;
}
