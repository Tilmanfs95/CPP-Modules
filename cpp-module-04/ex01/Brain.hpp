/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:07:06 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/30 20:15:48 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string	*ideas;
public:
	// constructor
	Brain();
	// copy constructor
	Brain(Brain &copy);
	// copy assignment operator
	Brain		&operator=(Brain &copy);
	// destructor
	~Brain();
	// getters
	std::string	*getIdeas( void );
	// setters
	void		setSpecIdea(unsigned int pos, std::string idea);
};

#endif