/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:59:42 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/18 12:14:19 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
public:
	// constructor
	Cure();
	// copy constructor
	Cure(Cure &copy);
	// copy assignment operator
	Cure	&operator=(Cure &copy);
	// destructor
	~Cure();
	// other
	Cure	*clone() const;
	void	use(ICharacter &target);
};

#endif