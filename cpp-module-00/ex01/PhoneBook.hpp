/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:57:53 by tfriedri          #+#    #+#             */
/*   Updated: 2023/03/01 10:49:29 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>


class PhoneBook
{
private:
	Contact	contact[8];
	int		index;
	bool	is_full;
public:
	// Constructor and Destructor
	PhoneBook();
	~PhoneBook();
	// Methods
	void	add_contact();
	void	list_contacts();
	void	show_contact();
	
	//void	show_contact(int index);
};

std::string	trunc_str(std::string str);
std::string	get_input(std::string type);

#endif
