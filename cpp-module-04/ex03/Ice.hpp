/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:23:49 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/12 14:43:10 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
public:
	// constructor
	Ice();
	// copy constructor
	Ice(Ice &copy);
	// copy assignment operator
	Ice		&operator=(Ice &copy);
	// destructor
	~Ice();
	// other
	Ice		*clone() const;
	void	use(ICharacter &target);
};

#endif
