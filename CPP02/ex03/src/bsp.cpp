/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:11:17 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/24 18:27:12 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

// Area = 1/2 * |x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)|
static Fixed area(Point const a, Point const b, Point const c)
{
    Fixed abs;
    Fixed area;

    abs = (a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY())); 
    if (abs < 0)
        area = abs * -1;
    else
        area = abs;
    return (area / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed abc = area(a, b, c);
    Fixed abp = area(a, b, point);
    Fixed acp = area(a, c, point);
    Fixed cbp = area(c, b, point);
    
    if (abc == abp + acp + cbp)
        return (1);
    else
        return (0);
}
