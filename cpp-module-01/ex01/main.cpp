/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:31:52 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/11 23:18:30 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main()
{
	Zombie	*z_horde;
	
	z_horde = zombieHorde(7, "TheZombieHorde");
	for (int i = 0; i < 7; i++)
		z_horde[i].announce();
	delete [] z_horde;
}
