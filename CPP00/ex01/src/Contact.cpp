/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:08:00 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/23 12:49:52 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <iomanip>
#include <iostream>

Contact::Contact(void) {}
Contact::~Contact(void) {}

void	Contact::setContact(std::string firstName, std::string lastName, 
                            std::string nickname, std::string phoneNumber, 
                            std::string darkestSecret)
{
    this->_firstName = firstName;
    this->_lastName = lastName;
    this->_nickname = nickname;
    this->_phoneNumber = phoneNumber;
    this->_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName(void) { return  (this->_firstName); }
std::string Contact::getlastName(void) { return  (this->_lastName); }
std::string Contact::getNickname(void) { return  (this->_nickname); }
std::string Contact::getPhoneNumber(void) { return  (this->_phoneNumber); }
std::string Contact::getDarkestSecret(void) { return  (this->_darkestSecret); }


std::string    Contact::_summaryLen(std::string value)
{
    if (value.length() > 10)
        return (value.substr(0, 9) + ".");
    return (value);
}

void    Contact::printSummary(int i)
{
    std::cout << std::setw(10) << i << "│";
    std::cout << std::setw(10) << _summaryLen(getFirstName()) << "│";
    std::cout << std::setw(10) << _summaryLen(getlastName()) << "│";
    std::cout << std::setw(10) << _summaryLen(getNickname()) << std::endl;
}
