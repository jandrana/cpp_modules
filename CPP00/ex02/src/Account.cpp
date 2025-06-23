/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:00:19 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/23 12:20:48 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"
#include "iomanip"
#include "ctime"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
    std::time_t t;
    std::tm     *current;
    
    t = std::time(0);
    current = std::localtime(&t);
    std::cout << "[" << current->tm_year + 1900 << std::flush;
    std::cout << std::setw(2) << std::setfill('0') << current->tm_mon + 1 << std::flush;
    std::cout << std::setw(2) << std::setfill('0') << current->tm_mday << std::flush;
    std::cout << "_" << std::flush;
    std::cout << std::setw(2) << std::setfill('0') << current->tm_hour << std::flush;
    std::cout << std::setw(2) << std::setfill('0') << current->tm_min << std::flush;
    std::cout << std::setw(2) << std::setfill('0') << current->tm_sec << std::flush;
    std::cout << "] ";
}

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbWithdrawals = 0;
    _nbDeposits = 0;
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts( void ) { return (_nbAccounts); }
int	Account::getTotalAmount( void ) { return (_totalAmount); }
int	Account::getNbDeposits( void ) { return (_totalNbDeposits); }
int	Account::getNbWithdrawals( void ) { return (_totalNbWithdrawals); }

int		Account::checkAmount( void ) const { return (this->_amount); }

void    Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << checkAmount() << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount += deposit;
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;
    ++_totalNbDeposits;
    _totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << checkAmount() << ";";
    if (withdrawal > _amount || withdrawal < 0)
    {
        std::cout << "withdrawal:refused" << std::endl;
        return (false);
    }
    std::cout << "withdrawal:" << withdrawal << ";";
    _amount -= withdrawal;
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "nb_withdrawals:" << ++_nbWithdrawals << std::endl;
    ++_totalNbWithdrawals;
    _totalAmount -= withdrawal;
    return (true);
}
