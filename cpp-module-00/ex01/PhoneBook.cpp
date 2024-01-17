/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:58:46 by tfriedri          #+#    #+#             */
/*   Updated: 2023/03/01 10:51:10 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Constructor and Destructor
PhoneBook::PhoneBook()
{
	index = 0;
	is_full = false;
}

PhoneBook::~PhoneBook(){}

// Methods
void	PhoneBook::add_contact()
{
	this->contact[index].set_first_name(get_input("first name"));
	this->contact[index].set_last_name(get_input("last name"));
	this->contact[index].set_nickname(get_input("nickname"));
	this->contact[index].set_phone_number(get_input("phone number"));
	this->contact[index].set_darkest_secret(get_input("darkest secret"));
	this->index++;
	std::cout << "\n";
	if (this->index == 8)
	{
		this->is_full = true;
		this->index = 0;
	}
}

void	PhoneBook::list_contacts()
{
	int	i = 0;

	std::cout << "\n";
	if (this->index == 0 && this->is_full == false)
	{
		std::cout << "No contacts to show!\n" << "\n";
		return;
	}
	std::cout << std::setw(10) << "  INDEX" << '|' << std::setw(10) << "  F.NAME" << '|'
	<< std::setw(10) << "  L.NAME" << '|' << std::setw(10) << "  PHONE" << "\n"
	<< std::setw(43) << std::setfill('-') << "" << std::setfill(' ') << "\n";
	while (++i <= this->index  || (this->is_full == true && i <= 8))
	{
		std::cout << std::setw(10) << std::right << i << '|' 
		<< std::setw(10) << trunc_str(this->contact[i - 1].get_first_name()) << '|'
		<< std::setw(10) << trunc_str(this->contact[i - 1].get_last_name()) << '|'
		<< std::setw(10) << trunc_str(this->contact[i - 1].get_nickname()) << "\n";
	}
	std::cout << std::setw(43) << std::setfill('-') << ""
	<< std::setfill(' ') << "\n\n";
	this->show_contact();
}

void	PhoneBook::show_contact()
{
	std::string	input;

	std::cout << "Please enter the index of the contact to show:\n> ";
	while(1)
	{
		std::getline(std::cin, input);
		if (input.length() == 1 && ((this->is_full == true && input[0] > 48 && input[0] < 57)
				|| (this->is_full == false && input[0] > 48 && input[0] < this->index + 49)))
		{
			std::cout << "\n"
			<< std::setw(15) << std::left << "first name"
			<< std::setw(0) << this->contact[input[0] - 49].get_first_name()
			<< "\n" << std::setw(15) << std::left << "last name"
			<< std::setw(0) << this->contact[input[0] - 49].get_last_name()
			<< "\n" << std::setw(15) << std::left << "nickname"
			<< std::setw(0) << this->contact[input[0] - 49].get_nickname()
			<< "\n" << std::setw(15) << std::left << "phone number"
			<< std::setw(0) << this->contact[input[0] - 49].get_phone_number()
			<< "\n" << std::setw(15) << std::left << "darkest secret"
			<< std::setw(0) << this->contact[input[0] - 49].get_darkest_secret()
			<< "\n" << "\n";
			return;
		}
		std::cout << "invalid input! try again:\n> ";
	}
}

// other functions

std::string	trunc_str(std::string str)
{
	if (str.length() <= 10)
		return (str);
	else
		return (str.substr(0,9).append("."));
}

std::string	get_input(std::string type)
{
	std::string	input;
	
	std::cout << "\n"
	<< "Please enter the " << type << ":\n> ";
	while(input.empty())
	{
		std::getline(std::cin, input);
		if (!input.empty())
			break;
		std::cout << "empty input! try again:\n> ";
	}
	return (input);
}
