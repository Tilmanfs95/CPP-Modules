/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 00:33:36 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/31 21:37:26 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	// decrement exception

	Bureaucrat	a("Olaf", 140);

	std::cout << a << std::endl;
	try
	{
		while (1)
		{
			std::cout << a.getGrade() << std::endl;
			a.decrementGrade();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	
	
	// constructor exception
	
	try
	{
		Bureaucrat	b("Annalena", 160);
	}
	catch(const std::exception& e)
	{
		std::cerr << std::endl << e.what() << '\n';
	}
	std::cout << std::endl;
	
	return (0);
}
