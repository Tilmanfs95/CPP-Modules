/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 22:54:14 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/04 18:50:58 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	a("Olaf");
	ClapTrap	b;
	
	std::cout << std::endl;
	a.attack("someone");
	a.takeDamage(6);
	a.beRepaired(4);
	a.beRepaired(6);
	a.beRepaired(6);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("Emma");
	b.attack("Emma");
	b.takeDamage(3);
	b.takeDamage(10);
	b.takeDamage(3);
	b.beRepaired(5);
	std::cout << std::endl;
	return (0);
}