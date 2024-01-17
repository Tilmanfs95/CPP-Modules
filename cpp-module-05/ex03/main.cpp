/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 00:33:36 by tfriedri          #+#    #+#             */
/*   Updated: 2023/02/08 22:41:45 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	ShrubberyCreationForm	a("home");
	ShrubberyCreationForm	b(a);
	ShrubberyCreationForm	c;
	RobotomyRequestForm		d("anywhere");
	PresidentialPardonForm	e("garden");
	Bureaucrat				helmut("Helmut", 140);
	Bureaucrat				berta("Berta", 50);
	Bureaucrat				hero("Hero", 1);
	
	c = a;
	std::cout << std::endl;
	std::cout << a << " | target: " << a.getTarget() << std::endl;
	std::cout << b << " | target: " << b.getTarget() << std::endl;
	std::cout << c << " | target: " << c.getTarget() << std::endl;
	std::cout << d << " | target: " << d.getTarget() << std::endl;
	std::cout << std::endl;
	berta.executeForm(c);
	helmut.signForm(c);
	helmut.executeForm(c);
	berta.executeForm(c);
	helmut.signForm(d);
	berta.signForm(d);
	berta.executeForm(d);
	hero.executeForm(d);
	berta.signForm(e);
	hero.executeForm(e);
	hero.signForm(e);
	hero.executeForm(e);
	std::cout << std::endl;
	
	Intern		bernd;
	AForm		*x = bernd.makeForm("SCForm", "targetX");
	AForm		*y = bernd.makeForm("RRForm", "targetY");
	AForm		*z = bernd.makeForm("PPForm", "targetZ");
	hero.signForm(*x);
	hero.signForm(*y);
	hero.signForm(*z);
	hero.executeForm(*x);
	hero.executeForm(*y);
	hero.executeForm(*z);
	delete x;
	delete y;
	delete z;
	std::cout << std::endl;
	return (0);
}
