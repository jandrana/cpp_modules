/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 14:12:56 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/23 17:23:09 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class   HumanB
{
    private:
        std::string _name;
        Weapon*     _weapon;

    public:
        HumanB(std::string name);

        void    attack(void);
        void    setWeapon(Weapon &weapon);
};

#endif /* HUMANB_HPP */
