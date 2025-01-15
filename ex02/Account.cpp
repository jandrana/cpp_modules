/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:00:19 by ana-cast          #+#    #+#             */
/*   Updated: 2024/11/16 21:33:36 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

/*
TODO
    - improve understanding of this-> in variables depending on objects, etc
    - learn more about getters and setters
        - clarify private and public methods good practices
	missing functions (destructor, )
        - makeDeposit
        - makeWithdrawal
        - checkAmount
        - displayStatus

DONE
    initializing
    timestamp
    constructor
    getters
    general total acc info
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
    //Example: index:0;amount:42;created
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
    //Example: index:7;amount:8942;closed
    _displayTimestamp();
    std::cout << "index" << _accountIndex << ";";
    std::cout << "amount" << checkAmount() << ";";
    std::cout << "closed" << std::endl;
}

//public
int	Account::getNbAccounts( void ) { return (this->_nbAccounts); }
int	Account::getTotalAmount( void ) { return (this->_totalAmount); }
int	Account::getNbDeposits( void ) { return (this->_totalNbDeposits); }
int	Account::getNbWithdrawals( void ) { return (this->_totalNbWithdrawals); }

int		Account::checkAmount( void ) const { return (_amount); }

void    Account::displayAccountsInfos( void )
{
    //Example: accounts:8;total:20049;deposits:0;withdrawals:0
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
    std::cout << "nb_deposits" << ++_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    //Example: index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << checkAmount() << ";";
    std::cout << "withdrawal:" << withdrawal << ";";
    _amount -= withdrawal;
    std::cout << "amount:" << checkAmount() << ";";
    std::cout << "nb_withdrawals" << ++_nbWithdrawals << std::endl;
}
