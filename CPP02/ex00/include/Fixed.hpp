/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:28:40 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/24 12:35:14 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
    private:

        int _fixedP;
        static const int _bits = 8;

    public:

        Fixed();
        ~Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);

        int getRawBits(void) const;
        void setRawBits(const int raw);
};

#endif /* FIXED_HPP */
