/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 00:33:48 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/19 13:24:16 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string	name;
	unsigned int		grade;
public:
	// constructors
	Bureaucrat();
	Bureaucrat(std::string const name);		//
	Bureaucrat(unsigned int grade);			//
	Bureaucrat(std::string const name, unsigned int grade);
	// copy constructor
	Bureaucrat(Bureaucrat &copy);
	// copy assignment operator
	Bureaucrat			&operator=(Bureaucrat &copy);
	// destructor
	~Bureaucrat();
	// getters
	const std::string	getName();
	unsigned int		getGrade();
	// member functions
	void				incrementGrade();
	void				decrementGrade();
	// exceptions
	class				GradeTooHighException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
	class				GradeTooLowException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
};

std::ostream			&operator<<(std::ostream &str, Bureaucrat &Bureaucrat);

#endif
