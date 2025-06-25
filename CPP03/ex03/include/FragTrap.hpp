/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:39:02 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 11:55:47 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : virtual public ClapTrap
{
    public:

        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);


        void attack(const std::string &target);
        void highFivesGuys(void);
        void printInfo(std::string name, unsigned int hp, unsigned int e, unsigned int a);
    
    protected:
        static const unsigned int _newHitPoints = 100;
        static const unsigned int _newEnergyPoints = 100;
        static const unsigned int _newAttackDamage = 30;

};

#endif /* FRAGTRAP_HPP */
