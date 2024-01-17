/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 13:48:37 by tfriedri          #+#    #+#             */
/*   Updated: 2023/02/08 22:12:29 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


// constructors

Intern::Intern()
{
	std::cout << "Intern basic constructor called" << std::endl;
}


// copy constructor

Intern::Intern(Intern &copy)
{
	std::cout << "Intern copy constructor called" << std::endl;
	(void)copy; // because of unused parameter
}


// copy assignment operator

Intern			&Intern::operator=(Intern &copy)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	(void)copy; // because of unused parameter
	return (*this);
}


// destructor

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;	
}


// member functions

AForm			*Intern::makeForm(std::string form_name, std::string form_target)
{
	AForm 			*(*funcs[3])(const std::string target) = {&makeSCF, &makeRRF, &makePPF};
	std::string		names[3] = {"SCForm", "RRForm", "PPForm"};

	for (int i = 0; i < 3; i++)
	{
		if (form_name == names[i])
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return (funcs[i](form_target));
		}
	}
	throw(Intern::unknownForm());
}


// exceptions

const char		*Intern::unknownForm::what() const throw()
{
	return ("Form with the given name doesn't exist!");
}


// functions for makeForm

AForm			*makeSCF(std::string target)
{
	return (new ShrubberyCreationForm(target));
}
AForm			*makeRRF(std::string target)
{
	return (new RobotomyRequestForm(target));
}
AForm			*makePPF(std::string target)
{
	return (new PresidentialPardonForm(target));
}
