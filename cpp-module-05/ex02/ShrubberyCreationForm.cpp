/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:38:01 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/19 17:28:49 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>
#include <string>


// constructors

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("SCForm", 145, 137), target("undefined")
{
	std::cout << "ShrubberyCreationForm basic constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("SCForm", 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}


// copy constructor

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : AForm(copy.getName(), copy.getSignGrade(), copy.getExecGrade()), target(copy.getTarget())
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}


// copy assignment operator

ShrubberyCreationForm			&ShrubberyCreationForm::operator=(ShrubberyCreationForm &copy)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	this->target = copy.getTarget();
	return (*this);
}


// destructor

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm " << this->getName() << "'s destructor called" << std::endl;
}


// getters

std::string						ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}


// member functions

void							ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSignStatus() == false)
		throw(AForm::NotSignedException());
	if (executor.getGrade() > this->getExecGrade())
		throw(AForm::GradeTooLowException());
	std::string			str = "          X                    X                    X                    X          \n         XXX                  XXX                  XXX                  XXX         \n        XXXXX                XXXXX                XXXXX                XXXXX        \n       XXXXXXX              XXXXXXX              XXXXXXX              XXXXXXX       \n      XXXXXXXXX            XXXXXXXXX            XXXXXXXXX            XXXXXXXXX      \n         |||                  |||                  |||                  |||         \n         |||                  |||                  |||                  |||         ";
	std::ofstream		file;
	std::string filename = this->target + "_shrubbery";
	
	file.open(filename.c_str());
	file << str;
	file.close();
}
