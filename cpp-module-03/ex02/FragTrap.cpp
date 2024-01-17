/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 01:05:24 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/04 18:40:35 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// constructors

FragTrap::FragTrap() : ClapTrap()
{
	this->name = "nameless";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << this->name << " rebuilds himself into a default FragTrap!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << this->name << " rebuilds himself into a FragTrap!" << std::endl;
}


// copy constructor

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = copy;
}


// copy assignment operator
FragTrap	&FragTrap::operator=(FragTrap &copy)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;
	return (*this);
}
	

// destructor

FragTrap::~FragTrap()
{
	std::cout << this->name << " lost his superpower and turned back into a ClapTrap!" << std::endl;
}


// member functions

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->name << " gives you a high five!" << std::endl;
}
