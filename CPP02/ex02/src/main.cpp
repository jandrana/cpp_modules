/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:52:20 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/24 19:01:09 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "a=" << a << std::endl;
    std::cout << "++a=" <<++a << std::endl;
    std::cout << "a=" << a << std::endl;
    std::cout << "a++=" << a++ << std::endl;
    std::cout << "a=" << a << std::endl;

    std::cout << "Max(" << a << ", " << b << ") = " << Fixed::max( a, b ) << std::endl;
    std::cout << "Min(" << a << ", " << b << ") = " << Fixed::min( a, b ) << std::endl;

    return (0);
}