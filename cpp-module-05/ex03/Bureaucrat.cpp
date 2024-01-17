/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 00:49:40 by tfriedri          #+#    #+#             */
/*   Updated: 2023/02/08 20:11:06 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"


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
	this->grade = copy.grade;
	return (*this);
}


// destructor

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->name << "'s destructor called" << std::endl;
}


// getters

const std::string		Bureaucrat::getName() const
{
	return (this->name);
}

unsigned int	Bureaucrat::getGrade() const
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

void			Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
		
}

void			Bureaucrat::executeForm(AForm const &form)
{
	bool	got_exception = false;
	
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
		got_exception = true;
	}
	if (got_exception == false)
	{
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
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
