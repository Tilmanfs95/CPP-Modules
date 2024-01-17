/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:40:18 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/18 15:20:28 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
private:
	Brain		*brain;
protected:
	std::string	type;
public:
	// constructor
	Cat();
	// copy constructor
	Cat(Cat &copy);
	// copy assignment operator
	Cat		&operator=(Cat &copy);
	// destructor
	virtual ~Cat();
	// getters
	std::string getType() const;
	Brain		*getBrain();
	// member functions
	void		makeSound() const;
};

#endif
