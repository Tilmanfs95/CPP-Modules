/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:37:42 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/19 17:27:59 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>


class PresidentialPardonForm : public AForm
{
private:
	std::string			target;
public:
	// constructor
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	// copy constructor
	PresidentialPardonForm(PresidentialPardonForm &copy);
	// copy assignment operator
	PresidentialPardonForm		&operator=(PresidentialPardonForm &copy);
	// destructor
	~PresidentialPardonForm();
	// getters
	std::string					getTarget() const;
	// member functions
	void						execute(Bureaucrat const &executor) const;
};

#endif
