/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:54:22 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/30 23:03:18 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
	std::string	type;
public:
	// constructor
	AAnimal();
	// copy constructor
	AAnimal(AAnimal &copy);
	// copy assignment operator
	AAnimal		&operator=(AAnimal &copy);
	// destructor
	virtual ~AAnimal();
	// getters
	virtual std::string	getType() const;
	// member functions
	virtual void		makeSound() const = 0;
	// pure virtual function to make the class abstract
	virtual Brain		*getBrain() = 0;
};

#endif
