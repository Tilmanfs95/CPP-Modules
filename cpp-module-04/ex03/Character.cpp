/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:43:15 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/18 13:01:54 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

// constructor
Character::Character(): name("unknown")
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Character's default constructor called" << std::endl;
}

Character::Character(std::string const &name): name(name)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << "Character's constructor called with the name " << name << std::endl;
}

// copy constructor
Character::Character(Character &copy): name(copy.name)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy.inventory[i])
			inventory[i] = copy.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	std::cout << "Character's copy constructor called" << std::endl;
}

// copy assignment operator
Character &Character::operator=(Character &copy)
{
	if (this != &copy)
	{
		// set name
		const_cast<std::string&>(name) = copy.name;
		// clean inventory
		for (int i = 0; i < 4; i++)
		{
			delete inventory[i];//
			inventory[i] = NULL;
		}
		// fill inventory
		for (int i = 0; i < 4; i++)
		{
			if (copy.inventory[i])
				inventory[i] = copy.inventory[i]->clone();
			else
				inventory[i] = NULL;
		}
	}
	std::cout << "Character's copy assignment operator called" << std::endl;
	return *this;
}

// destructor
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
	std::cout << "Character's destructor called" << std::endl;
}

// getters
std::string const &Character::getName() const
{
	return this->name;
}

// others
void	Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << "Charater " << this->name << " can not equip a NULL" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << "Charater " << this->name << " got equipped at slot " << i << " with " << m->getType() << std::endl;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && this->inventory[idx] != NULL)
	{
		this->inventory[idx] = NULL;
		std::cout << "Character " << this->name << " unequipped inventory slot " << idx << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Character " << this->name << "'s inventory has only 4 slots (0 - 3)" << std::endl;
	else if (this->inventory[idx] == NULL)
		std::cout << "Character " << this->name << " has no Materia at inventory slot " << idx << std::endl;
	else
		this->inventory[idx]->use(target);
}
