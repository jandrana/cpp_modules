/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:52:20 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/24 13:24:14 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
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
    return (*this);
}

Fixed::Fixed(const int value)
{
    std::cout << "Int Constructor called" << std::endl;
    this->_fixedP = value << this->_bits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float Constructor called" << std::endl;
    this->_fixedP = roundf(value * (1 << this->_bits));
}

int     Fixed::getRawBits(void) const { return (this->_fixedP); }

void    Fixed::setRawBits(const int raw) { this->_fixedP = raw; }

float   Fixed::toFloat(void) const { return ((float)this->_fixedP / (1 << this->_bits)); }

int     Fixed::toInt(void) const { return (this->_fixedP >> this->_bits); }

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
    os << other.toFloat();
    return (os);
}
