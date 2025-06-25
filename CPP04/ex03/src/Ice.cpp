/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:35:04 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 18:45:29 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    //std::cout << "Default constructor called (" << this->_type << ")" << std::endl;
}

Ice::~Ice()
{
    //std::cout << "Destructor called (" << this->_type << ")" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
    //std::cout << "Ice Copy constructor called" << std::endl;
    *this = other;
}

Ice& Ice::operator=(const Ice& other)
{
    //std::cout << "Ice Copy assignment operator called" << std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return (*this);
}

std::string const & Ice::getType() const
{
    return (this->_type);
}

Ice * Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
