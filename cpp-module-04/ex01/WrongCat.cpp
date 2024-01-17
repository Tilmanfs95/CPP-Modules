/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:41:44 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/30 00:48:45 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


// constructor

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}


// copy constructor

WrongCat::WrongCat(WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}


// copy assignment operator

WrongCat	&WrongCat::operator=(WrongCat &copy)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	this->type = copy.type;
	return (*this);
}


// destructor

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}


// getters

std::string WrongCat::getType() const
{
	return (this->type);
}


// member functions

void		WrongCat::makeSound() const
{
	std::cout << "*Miaaaaauu*" << std::endl;
}
