/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:52:20 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/24 19:04:07 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void )
{
    /*float x;
    float y;
    
    std::cout << "Enter Triangle Vertex Coordinates:" << std::endl;
    std::cout << "Vertex A" << std::endl;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    Point a(x, y);
    std::cout << "Vertex B" << std::endl;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    Point b(x, y);
    std::cout << "Vertex C" << std::endl;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    Point c(x, y);
    std::cout << "Enter Point to check if its inside triangle" << std::endl;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    Point point(x, y);
*/

    Point a(-2, -2);
    Point b(3, -2);
    Point c(-2, 4);
    Point point(1, 1);

    std::cout << "A(" << a.getX() << ", " << a.getY() << ") ";
    std::cout << "B(" << b.getX() << ", " << b.getY() << ") ";
    std::cout << "C(" << c.getX() << ", " << c.getY() << ") " << std::endl;
    std::cout << "Point(" << point.getX() << ", " << point.getY() << ") " << std::endl;
    if (bsp(a, b, c, point) == 1)
        std::cout << "POINT IS INSIDE TRIANGLE" << std::endl;
    else
        std::cout << "POINT IS OUTSIDE TRIANGLE" << std::endl;
    return (0);
}

/*
INSIDE BSP:
    std::cout << "AREA : " << abc << std::endl;
    std::cout << "ABP : " << abp << std::endl;
    std::cout << "ACP : " << acp << std::endl;
    std::cout << "CBP : " << cbp << std::endl;
    std::cout << "SUM : " << abp + acp + cbp << std::endl;
*/