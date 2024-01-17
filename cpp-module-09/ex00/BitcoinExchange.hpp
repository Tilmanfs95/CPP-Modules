/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:34:11 by tilmanfs          #+#    #+#             */
/*   Updated: 2023/09/11 12:05:23 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>

class BitcoinExchange {
	private:
		std::map<std::string, double> data;
    public:
        BitcoinExchange(void);
        ~BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &src);
		
		void openFile(std::string filename);
		void checkDate(std::string date);
		double getValue(std::string value);
		void printResult(std::string date, double value);



		class InvalidDateException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class TooEarlyDateException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class InvalidValueException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class ValueOutOfRangeException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		
		class NegativeValueException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		
		class NoDataException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		
		class FileException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

#endif
