/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:11:17 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/24 17:15:39 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::~Point() {}

Point::Point(const Point& other) : _x(other.getX()), _y(other.getY()) {}

Point& Point::operator=(const Point& other)
{
    if (this != &other)
    {
        (Fixed) this->_x = other.getX();
        (Fixed) this->_y = other.getY();
    }
    return *this;
}

const Fixed Point::getX(void) const { return (this->_x); }

const Fixed Point::getY(void) const { return (this->_y); }
