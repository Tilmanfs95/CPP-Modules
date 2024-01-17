/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:10:51 by tfriedri          #+#    #+#             */
/*   Updated: 2023/03/02 15:09:46 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// The subject is unclear because it says we need to create a program and later it says that we have to create and put in our own tests.
// So I created this second program to test the sed...

//		Instruction:
//		"make"		-	create sed without tests
//		"make test"	-	create the test program

#include <iostream>
#include <fstream>
#include <cstdlib>

int	main()
{
	std::ifstream file("sed");
	if (!file.good())
	{
		std::cerr << "\e[0;31mThere is no programm to test... (type make into terminal...)\e[0m" << std::endl;
		return 1;
	}
	
	std::cout << "\e[0;32m*TESTPROGRAMM STARTED*\n\e[0m" << std::endl;

	std::cout << "\e[0;32mrun sed without infile:\e[0m" << std::endl;
	std::system("rm -f infile infile.replace");
	std::system("./sed infile programming coding > /dev/tty");
	std::cout << std::endl;
	
	std::cout << "\e[0;32mrun sed without args:\e[0m" << std::endl;
	std::system("./sed > /dev/tty");
	std::cout << std::endl;
	
	std::cout << "\e[0;32mrun sed with too much args:\e[0m" << std::endl;
	std::system("./sed this are too much args > /dev/tty");
	std::cout << std::endl;
	
	std::cout << "\e[0;32mcreate an infile\e[0m" << std::endl;
	std::system("echo 42 is a programming school > infile");
	std::cout << "\e[0;32mrun sed in a valid way ( ./sed infile programming coding ) and show the content of infile and infile.replace:\e[0m" << std::endl;
	std::system("./sed infile programming coding > /dev/tty");
	std::system("cat infile > /dev/tty");
	std::system("cat infile.replace > /dev/tty");
	std::cout << std::endl;

	std::cout << "\e[0;32mrun with empty arg for <file>:\e[0m" << std::endl;
	std::system("./sed '' programming coding > /dev/tty");
	std::cout << std::endl;

	std::cout << "\e[0;32mrun with empty arg for <s1>:\e[0m" << std::endl;
	std::system("./sed infile '' coding > /dev/tty");
	std::cout << std::endl;
	
	std::cout << "\e[0;32mremove write-rights from outfile and try again:\e[0m" << std::endl;
	std::system("chmod 444 infile.replace");
	std::system("./sed infile programming coding > /dev/tty");
	std::cout << std::endl;
	
	std::cout << "\e[0;32mremove read-rights from infile and try again:\e[0m" << std::endl;
	std::system("chmod 000 infile");
	std::system("./sed infile programming coding > /dev/tty");
	std::cout << std::endl;
	
	std::cout << "\e[0;32mdeletes infile and infile.replace...\e[0m" << std::endl;
	std::system("rm -f infile infile.replace");
	std::cout << "\e[0;32m*END OF TEST*\e[0m" << std::endl;
}
