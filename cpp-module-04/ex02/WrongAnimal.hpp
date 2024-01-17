/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 22:54:22 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/30 00:54:51 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	// constructor
	WrongAnimal();
	// copy constructor
	WrongAnimal(WrongAnimal &copy);
	// copy assignment operator
	WrongAnimal		&operator=(WrongAnimal &copy);
	// destructor
	virtual ~WrongAnimal();
	// getters
	virtual std::string	getType() const;
	// member functions
	void		makeSound() const;	
};

#endif
