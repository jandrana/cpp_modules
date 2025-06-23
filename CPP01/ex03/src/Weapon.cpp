/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 14:16:13 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/23 17:24:24 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    std::cout << "Weapon Constructor called" << std::endl;
    this->_type = type;
}

const std::string&  Weapon::getType(void)
{
    return ((const std::string &)this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}
