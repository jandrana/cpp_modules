/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:28:57 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/23 16:54:11 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name )
{
    this->_name = name;
    std::cout << "New Zombie created called:" << this->_name << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}

Zombie::Zombie()
{
    std::cout << "New Zombie created without a name" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " Destroyed" << std::endl;
}
