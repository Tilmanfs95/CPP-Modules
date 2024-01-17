/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:37:42 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/19 17:28:03 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>


class RobotomyRequestForm : public AForm
{
private:
	std::string			target;
public:
	// constructor
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	// copy constructor
	RobotomyRequestForm(RobotomyRequestForm &copy);
	// copy assignment operator
	RobotomyRequestForm			&operator=(RobotomyRequestForm &copy);
	// destructor
	~RobotomyRequestForm();
	// getters
	std::string					getTarget() const;
	// member functions
	void						execute(Bureaucrat const &executor) const;
};

#endif
