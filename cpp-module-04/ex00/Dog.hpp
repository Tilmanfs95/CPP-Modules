/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:06:51 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/18 14:57:25 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
public:
	// constructor
	Dog();
	// copy constructor
	Dog(Dog &copy);
	// copy assignment operator
	Dog		&operator=(Dog &copy);
	// destructor
	~Dog();
	// getters
	std::string	getType() const;
	// member functions
	void		makeSound() const;
};

#endif
