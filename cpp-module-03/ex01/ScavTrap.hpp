/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 01:05:21 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/04 18:20:44 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
private:
	bool	guard_gate;
public:
	// constructors
	ScavTrap(std::string name);
	ScavTrap();

	// copy constructor
	ScavTrap(ScavTrap &copy);

	// copy assignment operator
	ScavTrap	&operator=(ScavTrap &copy);

	// destructor
	~ScavTrap();

	//member functions
	void		attack(const std::string &target);
	void		guardGate();
};

#endif
