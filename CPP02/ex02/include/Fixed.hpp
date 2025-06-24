/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:52:20 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/24 14:03:20 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:

        int                 _fixedP;
        static const int    _bits = 8;

    public:

        Fixed();
        ~Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        Fixed(const int value);
        Fixed(const float value);

        int     getRawBits(void) const;
        void    setRawBits(const int raw);
        
        float   toFloat(void) const;
        int     toInt(void) const;
        
        bool    operator>(const Fixed& other);
        bool    operator<(const Fixed& other);
        bool    operator>=(const Fixed& other);
        bool    operator<=(const Fixed& other);
        bool    operator==(const Fixed& other);
        bool    operator!=(const Fixed& other);

        Fixed   operator+(const Fixed& other);
        Fixed   operator-(const Fixed& other);
        Fixed   operator*(const Fixed& other);
        Fixed   operator/(const Fixed& other);

        Fixed&  operator++();
        Fixed   operator++(int);
        Fixed&  operator--();
        Fixed   operator--(int);

        static  Fixed&min(Fixed& i, Fixed& j);
        static  Fixed&max(Fixed& i, Fixed& j);
        static  const Fixed&min(const Fixed& i, const Fixed& j);
        static  const Fixed&max(const Fixed& i, const Fixed& j);
};

std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif /* FIXED_HPP */
