/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:11:17 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/24 16:55:26 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    private:

        Fixed const _x;
        Fixed const _y;

    public:

        Point();
        Point(const float x, const float y);
        ~Point();
        Point(const Point& other);
        Point& operator=(const Point& other);

        const Fixed getX(void) const;
        const Fixed getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif /* POINT_HPP */
