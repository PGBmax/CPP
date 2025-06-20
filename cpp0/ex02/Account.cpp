/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:38:09 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/20 13:19:24 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account( int initial_deposit )
{
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex
				<< ";amount:" <<  checkAmount()
				<< ";created" << std::endl; 
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex
				<< ";amount:" <<  _amount
				<< ";closed" << std::endl; 
}

int		Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int		Account::getTotalAmount ( void )
{
	return (_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout	<< " accounts:" << getNbAccounts()
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals()
				<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex 
				<< ";p_amount:" <<  checkAmount()
				<< ";deposit:" << deposit
				<< ";amount:" <<  checkAmount() + deposit
				<< ";nb_deposits:" << _nbDeposits
				<< std::endl;
	_amount += deposit;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (checkAmount() < withdrawal)
	{
		std::cout	<< " index:" << _accountIndex 
					<< ";p_amount:" <<  checkAmount()
					<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	std::cout	<< " index:" << _accountIndex 
				<< ";p_amount:" <<  checkAmount()
				<< ";withdrawal:" << withdrawal
				<< ";amount:" <<  checkAmount() - withdrawal
				<< ";nb_withdrawals:" << _nbWithdrawals
				<< std::endl;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex 
				<< ";amount:" << checkAmount()
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t raw_time;
	struct tm *timeinfo;
	char buffer[18];
	time(&raw_time);
	timeinfo = localtime(&raw_time);
	strftime(buffer, 18, "[%Y%m%d_%H%M%S]", timeinfo);
	std::cout << buffer;
}
