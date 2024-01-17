/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:54:22 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/30 00:41:47 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	// constructor
	Animal();
	// copy constructor
	Animal(Animal &copy);
	// copy assignment operator
	Animal		&operator=(Animal &copy);
	// destructor
	virtual ~Animal();
	// getters
	virtual std::string	getType() const;
	// member functions
	virtual void		makeSound() const;	
};

#endif
