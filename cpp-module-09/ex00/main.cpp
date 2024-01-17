/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:25:34 by tilmanfs          #+#    #+#             */
/*   Updated: 2023/09/11 11:58:42 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]){
    if (argc != 2)
	{
        std::cout << "Usage: ./btc <file>" << std::endl;
        return 1;
    }
	try
	{
		BitcoinExchange exchange;
		exchange.openFile(argv[1]);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


}