/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:48:56 by tfriedri          #+#    #+#             */
/*   Updated: 2023/02/08 22:38:50 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

class Intern
{
public:
	// constructors
	Intern();
	// copy constructor
	Intern(Intern &copy);
	// copy assignment operator
	Intern			&operator=(Intern &copy);
	// destructor
	~Intern();
	// member functions
	
	AForm			*makeForm(std::string form_name, std::string form_target);
	// exceptions
	class			unknownForm : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
};

AForm			*makeSCF(std::string target);
AForm			*makeRRF(std::string target);
AForm			*makePPF(std::string target);


#endif