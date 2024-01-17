/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:41:44 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/30 00:41:47 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


// constructor

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}


// copy constructor

Cat::Cat(Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}


// copy assignment operator

Cat	&Cat::operator=(Cat &copy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = copy.type;
	return (*this);
}


// destructor

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}


// getters

std::string Cat::getType() const
{
	return (this->type);
}


// member functions

void		Cat::makeSound() const
{
	std::cout << "*Miaaaaauu*" << std::endl;
}
