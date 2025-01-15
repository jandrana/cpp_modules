/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:00:19 by ana-cast          #+#    #+#             */
/*   Updated: 2024/11/16 01:41:47 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"
#include "iomanip"
#include "ctime"

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
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbWithdrawals = 0; // 4 that acc
    _nbDeposits = 0; // 4 that acc 
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void) {}; // destructor

//public
int	Account::getNbAccounts( void ) { return (this->_nbAccounts); };
int	Account::getTotalAmount( void ) { return (this->_totalAmount); };
int	Account::getNbDeposits( void ) { return (this->_nbDeposits); };
int	Account::getNbWithdrawals( void ) { return (this->_nbWithdrawals); };
void    Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit ) {};
bool	Account::makeWithdrawal( int withdrawal ) {};
int		Account::checkAmount( void ) const {};
void	Account::displayStatus( void ) const {};