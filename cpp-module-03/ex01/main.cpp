/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 22:54:14 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/04 18:51:46 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	c("Eric");
	ScavTrap	d;
	
	std::cout << std::endl;
	c.attack("someone");
	c.takeDamage(6);
	c.beRepaired(4);
	c.takeDamage(200);
	c.beRepaired(5);
	c.attack("Emma");
	c.guardGate();
	d.attack("Emma");
	d.takeDamage(3);
	d.takeDamage(10);
	d.takeDamage(3);
	d.beRepaired(5);
	c.guardGate();
	std::cout << std::endl;
	
	return (0);
}
