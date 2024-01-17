/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:53:37 by tfriedri          #+#    #+#             */
/*   Updated: 2023/01/11 23:21:38 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*z_horde;

	z_horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		z_horde[i].setName(name);
	return (z_horde);
}
