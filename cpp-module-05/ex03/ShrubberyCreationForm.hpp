/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:37:42 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/19 17:26:26 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>


class ShrubberyCreationForm : public AForm
{
private:
	std::string			target;
public:
	// constructor
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	// copy constructor
	ShrubberyCreationForm(ShrubberyCreationForm &copy);
	// copy assignment operator
	ShrubberyCreationForm		&operator=(ShrubberyCreationForm &copy);
	// destructor
	~ShrubberyCreationForm();
	// getters
	std::string					getTarget() const;
	// member functions
	void						execute(Bureaucrat const &executor) const;
};

#endif
