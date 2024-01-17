/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:04:46 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/14 23:40:25 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	switch_harl(char *level)
{
	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl		harl;
	int			i = 0;

	while (level != lvls[i] && i < 4)
		i++;
	switch (i)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
	
		default:
			std::cout << ("[ Probably complaining about insignificant problems ]") << std::endl;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "wrong number of arguments!" << std::endl;
		return (1);
	}
	switch_harl(argv[1]);
	return (0);
}
