/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:35:01 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/07 16:04:40 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "account.hpp"
//[19920104_091532] index:0;amount:42;created
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	
}

int		Account::getNbAccounts( void ) { return (_nbAccounts); }

int		Account::getTotalAmount( void ) { return (_totalAmount); }

int		Account::getNbDeposits( void ) { return (_totalNbDeposits); }

int		Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

void	Account::displayAccountsInfos( void )
{
	
}