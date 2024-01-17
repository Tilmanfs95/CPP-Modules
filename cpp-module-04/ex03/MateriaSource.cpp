/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:28:10 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/18 12:42:19 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

// constructor
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->memory[i] = NULL;
	std::cout << "MateriaSource's default constructor called" << std::endl;
}

// copy constructor
MateriaSource::MateriaSource(MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy.memory[i])
			this->memory[i] = copy.memory[i]->clone();
		else
			this->memory[i] = NULL;
	}
	std::cout << "MateriaSource's copy constructor called" << std::endl;
}

// copy assignment operator
MateriaSource	&MateriaSource::operator=(MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		delete memory[i];
		memory[i] = NULL;
		if (copy.memory[i])
			memory[i] = copy.memory[i]->clone();
		else
			memory[i] = NULL;
	}
	std::cout << "MateriaSource's copy assignment operator called" << std::endl;
	return *this;
}

// destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->memory[i] != NULL)
			delete this->memory[i];
	}
	std::cout << "MateriaSource's destructor called" << std::endl;
}

// others
void		MateriaSource::learnMateria(AMateria *mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->memory[i] == NULL)
		{
			this->memory[i] = mat;
			std::cout << "MateriaSource learned Materia type " << mat->getType() << std::endl;
			return;
		}
	}
	std::cout << "MateriaSource's memory is full" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->memory[i] == NULL)
			continue;
		if (memory[i]->getType() == type)
		{
			std::cout << "MateriaSource created Materia type " << type << std::endl;
			return (memory[i]->clone());
		}
	}
	std::cout << "MateriaSource can not create Materia type " << type << std::endl;
	return (0);
}
