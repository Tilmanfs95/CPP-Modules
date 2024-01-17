/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 00:49:40 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/31 21:37:57 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


// constructors

Bureaucrat::Bureaucrat(): name("nameless"), grade(150)
{
	std::cout << "Bureaucrat basic constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name): name(name), grade(150)
{
	std::cout << "Bureaucrat " << name << "'s constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(unsigned int grade): name("nameless")
{
	std::cout << "Bureaucrat constructor with grade called";
	if (grade > 150)
	{
		std::cout << " but grade is out of range";
		this->grade = 150;
		throw(GradeTooLowException());
	}
	else if (grade < 1)
	{
		std::cout << " but grade is out of range";
		this->grade = 150;
		throw(GradeTooHighException());
	}
	else
		this->grade = grade;
	std::cout << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade): name(name)
{
	std::cout << "Bureaucrat " << name << "'s constructor with grade called";
	if (grade > 150)
	{
		std::cout << " but grade is out of range";
		this->grade = 150;
		throw(GradeTooLowException());
	}
	else if (grade < 1)
	{
		std::cout << " but grade is out of range";
		this->grade = 150;
		throw(GradeTooHighException());
	}
	else
		this->grade = grade;
	std::cout << std::endl;
}


// copy constructor

Bureaucrat::Bureaucrat(Bureaucrat &copy): name(copy.getName()), grade(copy.getGrade())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}


// copy assignment operator

Bureaucrat		&Bureaucrat::operator=(Bureaucrat &copy)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	// not needed/possible to initialise name... because already created with const name
	this->grade = copy.grade;
	return (*this);
}


// destructor

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->name << "'s destructor called" << std::endl;
}


// getters

const std::string		Bureaucrat::getName()
{
	return (this->name);
}

unsigned int	Bureaucrat::getGrade()
{
	return (this->grade);
}


// member functions

void			Bureaucrat::incrementGrade()
{
	if (grade == 1)
		throw(GradeTooHighException());
	else
		grade--;
}

void			Bureaucrat::decrementGrade()
{
	if (grade == 150)
		throw(GradeTooLowException());
	else
		grade++;
}


// exceptions

const char		*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade can't be higher than 1!");
}

const char		*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade can't be lower than 150!");
}


// overload <<

std::ostream	&operator<<(std::ostream &str, Bureaucrat &bc)
{
	return (str << bc.getName() << ", bureaucrat grade " << bc.getGrade() << ".");
}