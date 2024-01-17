/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:17:46 by tfriedri          #+#    #+#             */
/*   Updated: 2023/02/06 23:12:36 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
# define FORM_HPP

#include <iostream>
class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				is_signed;
	const unsigned int	sign_grade;
	const unsigned int	exec_grade;
public:
	// constructor
	Form();
	Form(std::string name, unsigned int sign_grade, unsigned int exec_grade);
	// copy constructor
	Form(Form &copy);
	// copy assignment operator
	Form		&operator=(Form &copy);
	// destructor
	~Form();
	// getters
	const std::string	getName() const;
	bool			getSignStatus() const;
	unsigned int	getSignGrade() const;
	unsigned int	getExecGrade() const;
	// exceptions
	class 				GradeTooHighException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
	class				GradeTooLowException : public std::exception
	{
		public:
			virtual const char	*what() const throw();	
	};
	// member functions
	void			beSigned(Bureaucrat &bc);
};

// overload <<
std::ostream	&operator<<(std::ostream &str, const Form &form);

#endif
