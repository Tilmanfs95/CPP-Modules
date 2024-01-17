/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:22:44 by tfriedri          #+#    #+#             */
/*   Updated: 2023/09/11 14:08:03 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cout << "Usage: ./RPN \"[expression]\"" << std::endl;
		return (0);
	}
	RPN rpn(argv[1]);
	return (0);
}
