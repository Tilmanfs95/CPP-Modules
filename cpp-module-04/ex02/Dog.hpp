/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:06:51 by tfriedri          #+#    #+#             */
/*   Updated: 2023/02/08 22:44:14 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal
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
	~Dog();
	// getters
	std::string	getType() const;
	Brain		*getBrain();
	// member functions
	void		makeSound() const;
};

#endif
