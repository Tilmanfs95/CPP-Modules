/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:06:51 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/18 15:20:20 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
private:
	Brain		*brain;
protected:
	std::string	type;
public:
	// constructor
	Dog();
	// copy constructor
	Dog(Dog &copy);
	// copy assignment operator
	Dog		&operator=(Dog &copy);
	// destructor
	virtual ~Dog();
	// getters
	std::string	getType() const;
	Brain		*getBrain();
	// member functions
	void		makeSound() const;
};

#endif
