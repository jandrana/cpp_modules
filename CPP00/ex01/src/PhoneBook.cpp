/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:08:06 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/23 13:56:10 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>
#include <iostream>
#include <limits>
#include <cctype>

PhoneBook::PhoneBook() : _index(0), _numContacts(0) {}

PhoneBook::~PhoneBook() {}

void    PhoneBook::start(void)
{
    std::cout << "    ╔─────────────╗" << std::endl;
    std::cout << "╔───│  PHONEBOOK  │──╗" << std::endl;
    std::cout << "│   ╚─────────────╝  │" << std::endl;
    std::cout << "│ Available Commands │" << std::endl;
    std::cout << "│  > ADD             │" << std::endl;
    std::cout << "│  > SEARCH          │" << std::endl;
    std::cout << "│  > EXIT            │" << std::endl;
    std::cout << "│  > HELP            │" << std::endl;
    std::cout << "╚────────────────────╝" << std::endl;

}

int    PhoneBook::_checkInput(std::string input, int type)
{
    size_t  i = 0;
    size_t  len = input.length();;
    bool    empty = 1;

    if (type != 1)
    {
        while (++i < len)
        {
            if (!isspace(input[i]))
                empty = 0;
            if (isdigit(input[i]) && type == 0)
                return (1);
        }
        if (empty)
            return (1);
    }
    else 
    {
        if (len != 9)
            return (1);
        while (++i < len)
        {
            if (!isdigit(input[i]))
                return (1);
        }
    }
    return (0);
}

std::string    PhoneBook::_getInput(std::string newField, int type)
{
    std::string input;

    while (true)
    {
        if (std::cin.eof())
            return ("");
        std::cout << newField << std::flush;
        if (!std::getline(std::cin, input))
            break ;
        else if (std::cin.good() && !input.empty() && (!_checkInput(input, type)))
            return (input);
        else
            std::cout << "Invalid input. Please try again." << std::endl;
    }
    return ("");
    
}

int    PhoneBook::_checkDigits(std::string str)
{
    int i;

    i = -1;
    while (str[++i])
    {
        if (!isdigit(str[i]))
            return (1);
    }
    return (0);
}

void    PhoneBook::_printContact(Contact contact)
{
    std::cout << " ╔────────────────╗" << std::endl;
    std::cout << " │  CONTACT INFO  │" << std::endl;
    std::cout << " ╚────────────────╝" << std::endl;
    std::cout << "  > First Name: " << contact.getFirstName() << std::endl;
    std::cout << "  > Last Name: " << contact.getlastName() << std::endl;
    std::cout << "  > Nickname: " << contact.getNickname() << std::endl;
    std::cout << "  > Phone Number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "  > Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

void    PhoneBook::addContact(void)
{
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    std::cout << "               ╔───────────────╗" << std::endl;
    std::cout << "╔──────────────│  NEW CONTACT  │──────────────╗" << std::endl;
    std::cout << "│              ╚───────────────╝              │" << std::endl;
    std::cout << "│  For adding a new contact you must provide  │" << std::endl;
    std::cout << "│   the following info:                       │" << std::endl;
    std::cout << "│      > First Name                           │" << std::endl;
    std::cout << "│      > Last Name                            │" << std::endl;
    std::cout << "│      > Nickname                             │" << std::endl;
    std::cout << "│      > Phone Number                         │" << std::endl;
    std::cout << "│      > Darkest Secret                       │" << std::endl;
    std::cout << "│  Note: no empty fields allowed              │" << std::endl;
    std::cout << "╚─────────────────────────────────────────────╝" << std::endl;

    firstName = _getInput("\n> First Name: ", 0);
    lastName = _getInput("> Last Name: ", 0);
    nickname = _getInput("> Nickname: ", 2);
    phoneNumber = _getInput("> Phone Number: ", 1);
    darkestSecret = _getInput("> Darkest Secret: ", 2);
    if (darkestSecret == "")
        exitPhoneBook();
    else
    {
        _contacts[_index].setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
        _index = (_index + 1) % MAX_CONTACTS;
        _numContacts = std::min(_numContacts + 1, MAX_CONTACTS);
        std::cout << "\nSuccesfully Added Contact!" << std::endl;
    }
}

void    PhoneBook::searchContact(void)
{
    int i;
    int index;
    std::string input;

    if (_numContacts == 0)
    {
        std::cout << "No contacts found." << std::endl;
        return ;
    }
    else
    {
        std::cout << "             ╔─────────────────╗" << std::endl;
        std::cout << "╔────────────│  SEARCH RESULT  │────────────╗" << std::endl;
        std::cout << "             ╚─────────────────╝" << std::endl;
        std::cout << "     Index│First Name│ Last Name│  Nickname" << std::endl;
        i = -1;
        while (++i < _numContacts)
            _contacts[i].printSummary(i);
        std::cout << "\n  NOTE: To exit the search type 9 as index" << std::endl;
        std::cout << "╚───────────────────────────────────────────╝" << std::endl;
        std::cout << "Enter the index of the contact to view (9 to stop Search): " << std::flush;
        if (!std::getline(std::cin, input))
            return ;
        index = std::atoi(input.c_str());
        while (_checkDigits(input) || ((index < 0 || index >= _numContacts) && index != 9))
        {
            if (std::cin.eof())
            {
                exitPhoneBook();
                return ;
            }
            std::cin.clear();
            std::cout << "Invalid index. Try again with a valid index: " << std::flush;
            if (!std::getline(std::cin, input))
                return ;
            index = std::atoi(input.c_str());
        }
        if (index != 9)
        {
            _printContact(_contacts[index]);
            return ;
        }
        std::cin.clear();
        std::cout << "\n Exiting Search..." << std::endl;
        start();
    }
}

void    PhoneBook::exitPhoneBook(void)
{
    std::cout << "\n     ╔────────────╗" << std::endl;
    std::cout << "╔────│  GOODBYE!  │────╗" << std::endl;
    std::cout << "│    ╚────────────╝    │" << std::endl;
    std::cout << "│ Exiting PhoneBook... │" << std::endl;
    std::cout << "╚──────────────────────╝\n" << std::endl;
}