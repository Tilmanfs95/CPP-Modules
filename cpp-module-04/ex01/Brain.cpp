/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:10:43 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/30 20:16:46 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


// constructor

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	this->ideas = new std::string[100];
}


// copy constructor

Brain::Brain(Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	this->ideas = new std::string[100];
	std::copy(copy.ideas, copy.ideas + 100, this->ideas);
	*this = copy;
}


// copy assignment operator

Brain	&Brain::operator=(Brain &copy)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	std::copy(copy.ideas, copy.ideas + 100, this->ideas);
	return (*this);
}


// destructor

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	delete[] this->ideas;
}


// getter

std::string	*Brain::getIdeas( void )
{
	return (this->ideas);
}


// setters

void		Brain::setSpecIdea(unsigned int pos, std::string idea)
{
	this->ideas[pos] = idea;
}
