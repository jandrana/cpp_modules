/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:00:19 by ana-cast          #+#    #+#             */
/*   Updated: 2025/01/15 17:50:26 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"
#include "iomanip"
#include "ctime"

/*
TODO
    - Before finishing, delete .log file
    - Make final check for submitting

DONE
    initializing
    timestamp
    constructor
    getters
    general total acc info
    makeWithdrawal (refuse or not withdrawal function)
*/

//private
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
    _nbWithdrawals = 0; // 4 that acc
    _nbDeposits = 0; // 4 that acc 
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "created" << std::endl;
}

// destructor
Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "closed" << std::endl;
}

//public
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
    //Example: index:0;amount:42;deposits:0;withdrawals:0
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    //Example: index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
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
    //Example: index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
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
