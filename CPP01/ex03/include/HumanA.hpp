/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 14:11:10 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/23 17:22:48 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream> 
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon&     _weapon;

    public:
        HumanA(std::string name, Weapon &weapon);

        void attack(void);
};

#endif /* HUMANA_HPP */
