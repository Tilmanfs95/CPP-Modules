/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 01:05:24 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/04 18:29:32 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// constructors

ScavTrap::ScavTrap() : ClapTrap()
{
	this->name = "nameless";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->guard_gate = false;
	std::cout << this->name << " mutated into a " << "ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->guard_gate = false;
	std::cout << this->name << " mutated into a " << "ScavTrap!" << std::endl;
}


// copy constructor

ScavTrap::ScavTrap(ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->guard_gate = copy.guard_gate;
	*this = copy;
}


// copy assignment operator

ScavTrap	&ScavTrap::operator=(ScavTrap &copy)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	this->guard_gate = copy.guard_gate;
	return (*this);
}
	

// destructor

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " turned back into a ClapTrap!" << std::endl;
}


// member functions

void	ScavTrap::attack(const std::string &target)
{
	if (this->energy_points == 0)
		std::cout << "ScavTrap " << this->name << " can not bite " << target << ", because he has no energy points left!" << std::endl;
	else if (this->hit_points == 0)
		std::cout << "ScavTrap " << this->name << " can not bite " << target << ", because he is dead!" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->name << " bites " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points = this->energy_points - 1;
	}
}

void	ScavTrap::guardGate()
{
	if (this->guard_gate == true)
		std::cout << "ScavTrap " << this->name << " is already in Gate keeper Mode!" << std::endl;
	else
	{
		this->guard_gate = true;
		std::cout << "ScavTrap " << this->name << " is now in Gate keeper Mode!" << std::endl;
	}
}
