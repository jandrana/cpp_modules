/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:28:35 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/24 18:52:12 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _fixedP(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &other)
        this->setRawBits(other.getRawBits());
    return *this;
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedP);
}

void Fixed::setRawBits(const int raw)
{
    this->_fixedP = raw;
}
