/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:52:20 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/24 18:26:20 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed() : _fixedP(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed& other) { *this = other; }

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        this->setRawBits(other.getRawBits());
    return (*this);
}

Fixed::Fixed(const int value)
{
    this->_fixedP = value << this->_bits;
}

Fixed::Fixed(const float value)
{
    this->_fixedP = roundf(value * (1 << this->_bits));
}

int     Fixed::getRawBits(void) const
{
    return (this->_fixedP);
}

void    Fixed::setRawBits(const int raw)
{
    this->_fixedP = raw;
}

float   Fixed::toFloat(void) const
{
    return ((float)this->_fixedP / (1 << this->_bits));
}

int     Fixed::toInt(void) const
{
    return (this->_fixedP >> this->_bits);
}

bool Fixed::operator>(const Fixed& other) const
{
    return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) const
{
    return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) const
{
    return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other) const
{
    return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed& other) const
{
    return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) const
{
    return (this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed& other) const
{
    return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return (this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++()
{
    ++this->_fixedP;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    tmp._fixedP = this->_fixedP++;
    return (tmp);
}

Fixed& Fixed::operator--()
{
    --this->_fixedP;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    tmp._fixedP = this->_fixedP--;
    return (tmp);
}

Fixed& Fixed::min(Fixed& i, Fixed& j)
{
    if (i.getRawBits() < j.getRawBits())
        return (i);
    return (j);
}

Fixed& Fixed::max(Fixed& i, Fixed& j)
{
    if (i.getRawBits() > j.getRawBits())
        return (i);
    return (j);
}

const Fixed& Fixed::min(const Fixed& i, const Fixed& j)
{
    if (i.getRawBits() < j.getRawBits())
        return (i);
    return (j);
}

const Fixed& Fixed::max(const Fixed& i, const Fixed& j)
{
    if (i.getRawBits() > j.getRawBits())
        return (i);
    return (j);
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
    os << other.toFloat();
    return (os);
}
