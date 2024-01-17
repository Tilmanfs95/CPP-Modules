/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:40:18 by tfriedri          #+#    #+#             */
/*   Updated: 2023/02/08 22:45:19 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
protected:
	std::string	type;
public:
	// constructor
	WrongCat();
	// copy constructor
	WrongCat(WrongCat &copy);
	// copy assignment operator
	WrongCat		&operator=(WrongCat &copy);
	// destructor
	~WrongCat();
	// getters
	std::string getType() const;
	// member functions
	void		makeSound() const;
};

#endif
