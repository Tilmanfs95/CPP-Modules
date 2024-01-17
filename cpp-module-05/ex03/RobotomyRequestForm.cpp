/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:38:01 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/19 17:28:31 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>


// constructors

RobotomyRequestForm::RobotomyRequestForm() : AForm("RRForm", 72, 45), target("undefined")
{
	std::cout << "RobotomyRequestForm basic constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RRForm", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}


// copy constructor

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) : AForm(copy.getName(), copy.getSignGrade(), copy.getExecGrade()), target(copy.getTarget())
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}


// copy assignment operator

RobotomyRequestForm				&RobotomyRequestForm::operator=(RobotomyRequestForm &copy)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	this->target = copy.getTarget();
	return (*this);
}


// destructor

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm " << this->getName() << "'s destructor called" << std::endl;
}


// getters

std::string						RobotomyRequestForm::getTarget() const
{
	return (this->target);
}


// member functions

void							RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSignStatus() == false)
		throw(AForm::NotSignedException());
	if (executor.getGrade() > this->getExecGrade())
		throw(AForm::GradeTooLowException());
	std::cout << "*BRROOOOAAAARRRRKS*" << std::endl;
	srand((unsigned) time(NULL));
	int	succ = (rand() % 2);
	if (succ == 0)
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << "the robotomy of failed to optimize " << this->getTarget() << std::endl;
}
