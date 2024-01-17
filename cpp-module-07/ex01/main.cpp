/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri < tfriedri@student.42heilbronn    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:38:15 by tfriedri          #+#    #+#             */
/*   Updated: 2023/05/03 21:49:42 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void )
{
	std::string	names[3] = {"Jutta", "Matthias", "Luzie"};
	int			numbers[5] = {1, 2, 3, 4, 5};
	
	iter(numbers, 5, examplefunction);
	iter(names, 3, examplefunction);
	return (0);
}
