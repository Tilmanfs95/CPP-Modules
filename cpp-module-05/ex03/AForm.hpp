/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:17:46 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/19 17:28:10 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AFORM_HPP
# define AFORM_HPP

#include <iostream>
class Bureaucrat;

class AForm
{
private:
	const std::string			name;
	bool						is_signed;
	const unsigned int			sign_grade;
	const unsigned int			exec_grade;
public:
	// constructor
	AForm();
	AForm(std::string name, unsigned int sign_grade, unsigned int exec_grade);
	// copy constructor
	AForm(AForm &copy);
	// copy assignment operator
	AForm						&operator=(AForm &copy);
	// destructor
	virtual ~AForm();
	// getters
	const std::string			getName() const;
	bool						getSignStatus() const;
	unsigned int				getSignGrade() const;
	unsigned int				getExecGrade() const;
	virtual std::string			getTarget() const = 0;
	// exceptions
	class 						GradeTooHighException : public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
	class						GradeTooLowException : public std::exception
	{
		public:
			virtual const char	*what() const throw();	
	};
	class						NotSignedException : public std::exception
	{
		public:
			virtual const char	*what() const throw();	
	};
	// member functions
	void						beSigned(Bureaucrat &bc);
	virtual void				execute(Bureaucrat const &executor) const = 0;
};

// overload <<
std::ostream					&operator<<(std::ostream &str, const AForm &form);

#endif
