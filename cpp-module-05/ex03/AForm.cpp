/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:22:52 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/19 17:29:17 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"


// constructors

AForm::AForm(): name("nameless"), is_signed(false), sign_grade(1), exec_grade(1)
{
	std::cout << "AForm basic constructor called" << std::endl;
}

AForm::AForm(std::string name, unsigned int sign_grade, unsigned int exec_grade): name(name), sign_grade(sign_grade), exec_grade(exec_grade)
{
	std::cout << "AForm constructor called" << std::endl;
	if (sign_grade > 150 || exec_grade > 150)
		throw(AForm::GradeTooLowException());
	if (sign_grade < 1 || exec_grade < 1)
		throw(AForm::GradeTooHighException());
	this->is_signed = false;
}


// copy constructor

AForm::AForm(AForm &copy): name(copy.getName()), is_signed(copy.is_signed), sign_grade(copy.sign_grade), exec_grade(copy.exec_grade)
{
	std::cout << "AForm copy constructor called" << std::endl;
}


// copy assignment operator

AForm					&AForm::operator=(AForm &copy)
{
	std::cout << "AForm copy assignment operator called" << std::endl;
	this->is_signed = copy.is_signed;
	return (*this);
}


// destructor

AForm::~AForm()
{
	std::cout << "AForm " << this->name << "'s destructor called" << std::endl;
}


// getters

const std::string		AForm::getName() const
{
	return (this->name);
}

bool					AForm::getSignStatus() const
{
	return (this->is_signed);
}

unsigned int			AForm::getSignGrade() const
{
	return (this->sign_grade);
}

unsigned int			AForm::getExecGrade() const
{
	return (this->exec_grade);
}


// exceptions

const char				*AForm::GradeTooHighException::what() const throw()
{
	return ("grade is too high!");
}

const char				*AForm::GradeTooLowException::what() const throw()
{
	return ("grade is too low!");
}

const char				*AForm::NotSignedException::what() const throw()
{
	return ("form is not signed!");
}


// member functions

void					AForm::beSigned(Bureaucrat &bc)
{
	if (bc.getGrade() <= this->getSignGrade())
	{
		this->is_signed = true;
		return;
	}
	throw(AForm::GradeTooLowException());
	return;
}


// overload <<

std::ostream			&operator<<(std::ostream &str, const AForm &form)
{
	return (str << form.getName() << ", signed: " << form.getSignStatus() <<", sign grade " << form.getSignGrade() << ", execution grade " << form.getExecGrade() << ".");
}
