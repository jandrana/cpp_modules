/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:39:02 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 11:57:40 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : virtual public ClapTrap
{
    public:

        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);


        void attack(const std::string &target);
        void guardGate();
        void printInfo(std::string name, unsigned int hp, unsigned int e, unsigned int a);

    protected:
        static const unsigned int _newHitPoints = 100;
        static const unsigned int _newEnergyPoints = 50;
        static const unsigned int _newAttackDamage = 20;
};

#endif /* SCAVTRAP_HPP */
