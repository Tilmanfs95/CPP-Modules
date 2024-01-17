/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:36:02 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/12 15:11:53 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
private:
	std::string const	name;
	AMateria			*inventory[4];
public:
	// constructors
	Character();
	Character(std::string const &name);
	// copy constructor
	Character(Character &copy);
	// copy assignment operator
	Character &operator=(Character &copy);
	// destructor
	~Character();
	// getters
	std::string const &getName() const;
	// others
	void	equip(AMateria *m);
	void	unequip(int idx);
	void	use(int idx, ICharacter &target);
};

#endif