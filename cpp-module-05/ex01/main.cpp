/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 00:33:36 by tfriedri          #+#    #+#             */
/*   Updated: 2023/02/06 23:15:56 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	// constructor exception
	
	try
	{
		Form	a("Contract", 120, 156);
	}
	catch(const std::exception& e)
	{
		std::cerr << std::endl << e.what() << '\n';
	}
	std::cout << std::endl << std::endl;

	// other tests

	Form	b("testform", 120, 134);
	std::cout << b << std::endl << std::endl;
	
	Form	c = b;
	std::cout << c << std::endl << std::endl;
	
	Form	d;
	d = b;
	std::cout << d << std::endl << std::endl << std::endl;

	// signing tests
	
	Bureaucrat e("Olaf", 145);
	Bureaucrat f("Eduard", 34);
	e.signForm(b);
	std::cout << b << std::endl;
	f.signForm(b);
	std::cout << b << std::endl;
	std::cout << std::endl;
	
	return (0);
}
