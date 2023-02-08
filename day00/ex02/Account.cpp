/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:35:01 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/08 13:34:31 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "account.hpp"
#include <iostream>
//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	std::cout << "index:" << Account::_accountIndex << ";amount:" << Account::_amount << ";created\n";
	Account::_accountIndex++;
}

int		Account::getNbAccounts( void ) { return (_nbAccounts); }

int		Account::getTotalAmount( void ) { return (_totalAmount); }

int		Account::getNbDeposits( void ) { return (_totalNbDeposits); }

int		Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" ;
}