/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 22:54:11 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/04 18:15:40 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// constructors

ClapTrap::ClapTrap(): name("nameless"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap " << this->name << " created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap " << this->name << " created!" << std::endl;
}


// copy constructor

ClapTrap::ClapTrap(ClapTrap &copy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}


// copy assignment operator

ClapTrap		&ClapTrap::operator=(ClapTrap &copy)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	return (*this);
}


// destructor

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destoyed!" << std::endl;
}


// member functions

void		ClapTrap::attack(const std::string& target)
{
	if (this->energy_points == 0)
		std::cout << "ClapTrap " << this->name << " can not attack " << target << ", because he has no energy points left!" << std::endl;
	else if (this->hit_points == 0)
		std::cout << "ClapTrap " << this->name << " can not attack " << target << ", because he is dead!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points--;
	}
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points == 0)
		std::cout << "ClapTrap " << this->name << " lost 0 hit points because he is alredy dead!" << std::endl;
	else if (this->hit_points <= amount)
	{
		amount = this->hit_points;
		this->hit_points = 0;
		std::cout << "ClapTrap " << this->name << " lost " << amount << " hit points and died!" << std::endl;
	}
	else
	{
		this->hit_points -= amount;
		std::cout << "ClapTrap " << this->name << " lost " << amount << " hit points!" << std::endl;
	}
	
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points == 0)
		std::cout << "ClapTrap " << this->name << " can not repair itself, because he has no energy points left!" << std::endl;
	else if (this->hit_points == 0)
		std::cout << "ClapTrap " << this->name << " can not repair itself, because he is already dead!" << std::endl;
	else
	{
		this->hit_points = this->hit_points + amount;
		this->energy_points--;
		std::cout << "ClapTrap " << this->name << " spent 1 energy point to repair itself and gets " << amount << " hit points back!" << std::endl;
	}
}
