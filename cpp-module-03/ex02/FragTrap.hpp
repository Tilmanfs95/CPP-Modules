/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 01:05:21 by tfriedri          #+#    #+#             */
/*   Updated: 2023/02/08 22:45:55 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
public:
	// constructors
	FragTrap(std::string name);
	FragTrap();

	// copy constructor
	FragTrap(FragTrap &copy);

	// copy assignment operator
	FragTrap	&operator=(FragTrap &copy);

	// destructor
	~FragTrap();

	//member functions
	void	highFivesGuys( void );
};

#endif
