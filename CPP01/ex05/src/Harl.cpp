/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 14:57:37 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/23 18:24:56 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Harl Constructor called" << std::endl;
    this->_levels[0] = "DEBUG";
    this->_levels[1] = "INFO";
    this->_levels[2] = "WARNING";
    this->_levels[3] = "ERROR";
}

Harl::~Harl()
{
    std::cout << "Harl Destructor called" << std::endl;
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
        "pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You "
    "didn't put enough bacon in my burger! If you did, "
    "I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've "
    "been coming for years, whereas you started working here just last month"
    << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now"
    << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*f[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < 4; i++)
    {
        if (this->_levels[i] == level)
        {
            (this->*f[i])();
            return ;
        }
    }
    std::cout << "Level " << level << " not found" << std::endl;
    std::cout << "Valid levels: " << std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << this->_levels[i] << std::endl;
    }
}
