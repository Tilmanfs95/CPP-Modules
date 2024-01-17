/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:38:01 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/19 17:27:44 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"


// constructors

PresidentialPardonForm::PresidentialPardonForm() : AForm("PPForm", 25, 5), target("undefined")
{
	std::cout << "PresidentialPardonForm basic constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PPForm", 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}


// copy constructor

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : AForm(copy.getName(), copy.getSignGrade(), copy.getExecGrade()), target(copy.getTarget())
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}


// copy assignment operator

PresidentialPardonForm			&PresidentialPardonForm::operator=(PresidentialPardonForm &copy)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	this->target = copy.getTarget();
	return (*this);
}


// destructor

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm " << this->getName() << "'s destructor called" << std::endl;
}


// getters

std::string						PresidentialPardonForm::getTarget() const
{
	return (this->target);
}


// member functions

void							PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSignStatus() == false)
		throw(AForm::NotSignedException());
	if (executor.getGrade() > this->getExecGrade())
		throw(AForm::GradeTooLowException());
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
