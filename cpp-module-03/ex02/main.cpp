/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 22:54:14 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/04 18:51:01 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	c("Paul");
	FragTrap	d;
	
	std::cout << std::endl;
	c.attack("anyone");
	c.takeDamage(6);
	c.beRepaired(4);
	c.beRepaired(6);
	c.takeDamage(10);
	c.takeDamage(150);
	c.beRepaired(5);
	c.attack("Emma");
	d.takeDamage(3);
	d.takeDamage(10);
	d.takeDamage(3);
	d.attack("Olaf");
	d.beRepaired(5);
	c.highFivesGuys();
	std::cout << std::endl;
	return (0);
}
