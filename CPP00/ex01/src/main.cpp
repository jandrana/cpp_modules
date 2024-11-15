/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:07:57 by ana-cast          #+#    #+#             */
/*   Updated: 2024/11/15 23:43:47 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>
#include <iostream>

int main(void)
{
    PhoneBook   phoneBook;
    std::string cmd;

    phoneBook.start();
    while (cmd != "EXIT")
    {
        std::cout << " > " << std::flush;
        if (!std::getline(std::cin, cmd))
            break ;
        if (std::cin.good())
        {
            if (cmd == "HELP" || cmd.empty())
                phoneBook.start();
            else if (cmd == "ADD")
                phoneBook.addContact();
            else if (cmd == "EXIT")
                phoneBook.exitPhoneBook();
            else if (cmd == "SEARCH")
                phoneBook.searchContact();
            else
                std::cout << "Invalid command. Type HELP to see List of Commands" << std::endl;   
            std::cin.clear();
        }
        else
            break ;
    }
    return (0);
}
