/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 01:08:56 by tfriedri          #+#    #+#             */
/*   Updated: 2023/03/01 11:43:05 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// Constructor & Destructor
Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:\033[34m" << _nbAccounts << "\033[0m;" 
	<< "amount:\033[34m" << initial_deposit << "\033[0m;" << "created";
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount = _totalAmount + initial_deposit;
	std::cout << std::endl; 
	(void)initial_deposit;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:\033[34m" << _accountIndex << "\033[0m;" 
	<< "amount:\033[34m" << this->_amount << "\033[0m;closed";
	std::cout << std::endl;
}

// Getters
int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:\033[34m" << _nbAccounts << "\033[0m;" 
	<< "total:\033[34m" << _totalAmount << "\033[0m;" 
	<< "deposits:\033[34m" << _totalNbDeposits << "\033[0m;" 
	<< "withdrawals:\033[34m" << _totalNbWithdrawals << "\033[0m";
	std::cout << std::endl;
}

// Fuctions

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:\033[34m" <<this->_accountIndex << "\033[0m;"
	<< "p_amount:\033[34m" << this->_amount << "\033[0m;"
	<< "deposit:\033[34m" << deposit << "\033[0m;";
	this->_amount = this->_amount + deposit;
	_totalAmount = _totalAmount + deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "amount:\033[34m" << this->_amount << "\033[0m;"
	<< "deposits:\033[34m" << this->_nbDeposits << "\033[0m;";
	std::cout << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:\033[34m" <<this->_accountIndex << "\033[0m;"
	<< "p_amount:\033[34m" << this->_amount << "\033[0m;";
	if (withdrawal <= this->_amount)
	{
		this->_amount = this->_amount - withdrawal;
		_totalAmount = _totalAmount - withdrawal;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:\033[34m" << withdrawal << "\033[0m;"
		<< "amount:\033[34m" << this->_amount << "\033[0m;"
		<< "nb_withdrawal:\033[34m" << this->_nbWithdrawals << "\033[0m;";
		std::cout << std::endl;
		return (true);
	}
	else
		std::cout << "withdrawal:refused" << std::endl;
	return(false);
}

int	Account::checkAmount() const
{
	return (1);	
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:\033[34m" <<this->_accountIndex << "\033[0m;"
	<< "amount:\033[34m" << this->_amount << "\033[0m;"
	<< "deposits:\033[34m" << this->_nbDeposits << "\033[0m;"
	<< "withdrawals:\033[34m" << this->_nbWithdrawals << "\033[0m";
	std::cout << std::endl;
}

void	Account::_displayTimestamp()
{
	std::time_t t = std::time(NULL);
  	std::tm* local_time = std::localtime(&t);

	char buffer[20];
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", local_time);
	std::cout << buffer;
}
