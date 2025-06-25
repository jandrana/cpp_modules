/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:35:04 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 18:58:39 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    //std::cout << "Default constructor called (" << this->_type << ")" << std::endl;
}

Cure::~Cure()
{
    //std::cout << "Destructor called (" << this->_type << ")" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
    //std::cout << "Cure Copy constructor called" << std::endl;
    *this = other;
}

Cure& Cure::operator=(const Cure& other)
{
    //std::cout << "Cure Copy assignment operator called" << std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return (*this);
}

std::string const & Cure::getType() const
{
    return (this->_type);
}

Cure * Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
