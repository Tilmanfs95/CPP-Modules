/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:22:52 by tfriedri          #+#    #+#             */
/*   Updated: 2023/02/08 20:15:56 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


// constructors

Form::Form(): name("nameless"), is_signed(false), sign_grade(1), exec_grade(1)
{
	std::cout << "Form basic constructor called" << std::endl;
}

Form::Form(std::string name, unsigned int sign_grade, unsigned int exec_grade): name(name), sign_grade(sign_grade), exec_grade(exec_grade)
{
	std::cout << "Form constructor called" << std::endl;
	if (sign_grade > 150 || exec_grade > 150)
		throw(Form::GradeTooLowException());
	if (sign_grade < 1 || exec_grade < 1)
		throw(Form::GradeTooHighException());
	this->is_signed = false;
}


// copy constructor

Form::Form(Form &copy): name(copy.getName()), is_signed(copy.is_signed), sign_grade(copy.sign_grade), exec_grade(copy.exec_grade)
{
	std::cout << "Form copy constructor called" << std::endl;
}


// copy assignment operator

Form		&Form::operator=(Form &copy)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	this->is_signed = copy.is_signed;
	return (*this);
}


// destructor

Form::~Form()
{
	std::cout << "Form " << this->name << "'s destructor called" << std::endl;
}


// getters

const std::string	Form::getName() const
{
	return (this->name);
}

bool			Form::getSignStatus() const
{
	return (this->is_signed);
}

unsigned int	Form::getSignGrade() const
{
	return (this->sign_grade);
}

unsigned int	Form::getExecGrade() const
{
	return (this->exec_grade);
}


// exceptions

const char			*Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high!");
}

const char			*Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low!");
}


// member functions

void			Form::beSigned(Bureaucrat &bc)
{
	if (bc.getGrade() <= this->getSignGrade())
	{
		this->is_signed = true;
		return;
	}
	throw(Form::GradeTooLowException());
	return;
}


// overload <<

std::ostream	&operator<<(std::ostream &str, const Form &form)
{
	return (str << form.getName() << ", signed: " << form.getSignStatus() <<", sign grade " << form.getSignGrade() << ", execution grade " << form.getExecGrade() << ".");
}
