/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:35:04 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 19:56:13 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    //std::cout << "AMateria Constructor called" << std::endl;
    this->_type = type;
}

AMateria::AMateria()
{
    //std::cout << "AMateria Default constructor called" << std::endl;
    this->_type = "Unknown";
}

AMateria::~AMateria()
{
    //std::cout << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& other)
{
    //std::cout << "AMateria Copy constructor called" << std::endl;
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    //std::cout << "AMateria Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria: " << this->_type << " used on " << target.getName() << std::endl;
}
