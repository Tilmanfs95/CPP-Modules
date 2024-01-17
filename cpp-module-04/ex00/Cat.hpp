/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:40:18 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/18 14:57:20 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
public:
	// constructor
	Cat();
	// copy constructor
	Cat(Cat &copy);
	// copy assignment operator
	Cat		&operator=(Cat &copy);
	// destructor
	~Cat();
	// getters
	std::string getType() const;
	// member functions
	void		makeSound() const;
};

#endif
