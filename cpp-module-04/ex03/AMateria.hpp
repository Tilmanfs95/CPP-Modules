/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:32:09 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/12 11:22:03 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	const type;
public:
	// constructors
	AMateria();
	AMateria(std::string const &type);
	// destructor
	virtual ~AMateria();
	// getters
	std::string	const &getType() const;
	// others
	virtual	AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
