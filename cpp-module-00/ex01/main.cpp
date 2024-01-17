/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 10:38:32 by tfriedri          #+#    #+#             */
/*   Updated: 2023/03/01 10:49:10 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	show_menu()
{
	std::cout << std::setw(14) << std::left << "COMMAND" << std::setw(30) << std::left << "DESCRIPTION"
	<< "\n\n"
	<< std::setw(14) << std::left << "ADD" << std::setw(30) << std::left << "save a new contact" << "\n"
	<< std::setw(14) << std::left << "SEARCH" << std::setw(30) << std::left << "display a specific contact" << "\n"
	<< std::setw(14) << std::left << "EXIT" << std::setw(30) << std::left << "quit program" << "\n"
	<< "\nPlease enter a command:\n> ";
}

void	get_command(PhoneBook crappy_book)
{
	std::string command;

	while (std::getline(std::cin, command))
	{
		if (command == "ADD")
			crappy_book.add_contact();
		else if (command == "SEARCH")
			crappy_book.list_contacts();
		else if (command == "EXIT")
			return ;
		else
		{
			std::cout << "not a valid command! try again:\n> ";
			continue ;
		}
		show_menu();
	}
}

int	main()
{
	PhoneBook	crappy_book;
	std::string	title = "CRAPPY PHONEBOOK";

	std::cout << "\n"
	<< std::setw(40) << std::setfill('*') << "" << std::setfill(' ') << "\n"
	<< std::setw((40 - title.length()) / 2) << "" << std::left << title << "\n"
	<< std::setw(40) << std::setfill('*') << "" << std::setfill(' ') << "\n";
	show_menu();
	get_command(crappy_book);
	return (0);
}
