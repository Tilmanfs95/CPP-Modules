/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:28:28 by tilmanfs          #+#    #+#             */
/*   Updated: 2023/09/18 15:40:11 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {
		std::ifstream file("data.csv");
		if (!file.is_open())
			throw NoDataException();
		std::string line;
		std::getline(file, line);
		while (std::getline(file, line)) {
			std::stringstream ss(line);
			std::string date;
			double exchange_rate;
			std::getline(ss, date, ',');
			ss >> exchange_rate;
		this->data[date] = exchange_rate;
		}
		return ;
}

BitcoinExchange::~BitcoinExchange(void) {
    return ;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) {
	*this = src;
	return ;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src) {
	if (this != &src) {
		this->data = src.data;
	}
	return (*this);
}

void BitcoinExchange::openFile(std::string filename) {
		std::ifstream file(filename);
		if (!file.is_open())
			throw FileException();
		std::string line;
		std::getline(file, line);
		while (std::getline(file, line)) {
			std::stringstream ss(line);
			std::string date;
			std::string value;
			std::getline(ss, date, '|');
			date.erase(remove_if(date.begin(), date.end(), isspace), date.end());
			std::getline(ss, value, '\n');
			value.erase(remove_if(value.begin(), value.end(), isspace), value.end());
			try
			{
				checkDate(date);
				printResult(date, getValue(value));
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		return ;
}

double BitcoinExchange::getValue(std::string value) {
    if(value.empty() || value[0] == '.' || value[value.size()-1] == '.' || (value[0] == '0' && value.size() > 1 && value[1] != '.'))
        throw InvalidValueException();
    double number;
    try {
        number = std::stod(value);
    } catch (std::invalid_argument& e) {
        throw InvalidValueException();
    } catch (std::out_of_range& e) {
        throw ValueOutOfRangeException();
    }
	if (number < 0)
		throw NegativeValueException();
    else if(number > 1000)
        throw ValueOutOfRangeException();
    return number;
}



void BitcoinExchange::checkDate(std::string date) {
    if(date.size() != 10 || date[4] != '-' || date[7] != '-')
		throw InvalidDateException();
    int year = std::stoi(date.substr(0, 4));
    int month = std::stoi(date.substr(5, 2));
    int day = std::stoi(date.substr(8, 2));
    if(year < 1 || month < 1 || month > 12 || day < 1 || day > 31)
		throw InvalidDateException();
    if((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		throw InvalidDateException();
    if(month == 2) {
        if(day > 29 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
			throw InvalidDateException();
        if(day > 28 && !((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
			throw InvalidDateException();
    }
}


void BitcoinExchange::printResult(std::string date, double value) {
	if (this->data.count(date) > 0)
		std::cout << date << " => " << value << " = " << this->data[date] * value << std::endl;
	else
	{
		std::map<std::string, double>::iterator it = data.lower_bound(date);
		if (it == this->data.begin())
			throw TooEarlyDateException();
		else
		{
			--it;
			// std::cout << it->first << " => " << value << " = " << it->second * value << std::endl;
			std::cout << date << " => " << value << " = " << it->second * value << std::endl;
		}
	}
}






const char *BitcoinExchange::InvalidDateException::what() const throw() {
	return ("Error: Invalid date.");
}

const char *BitcoinExchange::TooEarlyDateException::what() const throw() {
	return ("Error: Date too early.");
}

const char *BitcoinExchange::InvalidValueException::what() const throw() {
	return ("Error: Invalid number.");
}

const char *BitcoinExchange::ValueOutOfRangeException::what() const throw() {
	return ("Error: Number out of range.");
}

const char *BitcoinExchange::NegativeValueException::what() const throw() {
	return ("Error: Not a positive number.");
}

const char *BitcoinExchange::NoDataException::what() const throw() {
	return ("Error: No data! Please check your data.csv file.");
}

const char *BitcoinExchange::FileException::what() const throw() {
	return ("Error: File not found.");
}
