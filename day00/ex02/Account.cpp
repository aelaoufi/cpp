/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:35:01 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/11 14:32:45 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
static int _index = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_amount = initial_deposit;
	_accountIndex = _index;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
	_totalAmount += _amount;
	_index++;
}

int		Account::getNbAccounts( void ) { return (_nbAccounts); }

int		Account::getTotalAmount( void ) { return (_totalAmount); }

int		Account::getNbDeposits( void ) { return (_totalNbDeposits); }

int		Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() + _index << ";total:" << getTotalAmount() << ";deposits:"
		<< getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << "\n";
}

void	Account::displayStatus (void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:"
		<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_nbDeposits++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:"
		<< deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << "\n";
	_totalAmount += deposit;
	_amount += deposit;
	_totalNbDeposits++;
}

int		Account::checkAmount( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << "\n";
	return (0);
}

bool	Account::makeWithdrawal(int whithdrawl)
{
	_displayTimestamp();
	if (_amount < whithdrawl)
		return (Account::checkAmount());
	_nbWithdrawals++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:"
		<< whithdrawl << ";amount:" << _amount - whithdrawl << ";nb_withdrawals:" << _nbWithdrawals << "\n";
	_totalAmount -= whithdrawl;
	_amount -= whithdrawl;
	_totalNbWithdrawals++;
	return (1);
}

Account::~Account ()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

void	Account::_displayTimestamp( void )
{
	std::time_t time = std::time(0);
	struct tm *loctime = localtime(&time);
	
	std::cout << "[" << loctime->tm_year + 1900;
	if (loctime->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << loctime->tm_mon + 1;
	if (loctime->tm_mday < 10)
		std::cout << "0";
	std::cout << loctime->tm_mday << "_";
	if (loctime->tm_hour < 10)
		std::cout << "0";
	std::cout << loctime->tm_hour;
	if (loctime->tm_min < 10)
		std::cout << "0";
	std::cout << loctime->tm_min;
		if (loctime->tm_sec < 10)
		std::cout << "0";
	std::cout << loctime->tm_sec << "] ";
}