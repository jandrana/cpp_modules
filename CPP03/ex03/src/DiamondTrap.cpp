/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:39:07 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 15:04:47 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "Default DiamondTrap constructor called" << std::endl;
    ClapTrap::_name += "_clap_name";
    this->_name = "Unnamed";
    this->_hitPoints = FragTrap::_newHitPoints;
    this->_energyPoints = ScavTrap::_newEnergyPoints;
    this->_attackDamage = FragTrap::_newAttackDamage;
    printInfo(this->_name, this->_hitPoints, this->_energyPoints, this->_attackDamage);
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    std::cout << "Constructor DiamondTrap called" << std::endl;
    ClapTrap::_name += "_clap_name";
    this->_name = name;
    this->_hitPoints = FragTrap::_newHitPoints;
    this->_energyPoints = ScavTrap::_newEnergyPoints;
    this->_attackDamage = FragTrap::_newAttackDamage;
    printInfo(this->_name, this->_hitPoints, this->_energyPoints, this->_attackDamage);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destroyed DiamondTrap " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other._name), ScavTrap(other._name), FragTrap(other._name)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    printInfo(this->_name, this->_hitPoints, this->_energyPoints, this->_attackDamage);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "[WHOAMI INFO] ";
    std::cout << "Name: " << this->_name << "; ClapTrap name: " << ClapTrap::_name << std::endl;
}

void DiamondTrap::printInfo(std::string name, unsigned int hp, unsigned int e, unsigned int a)
{
    std::cout << "[DIAMONDTRAP INFO " << name << "]:";
    std::cout << " Hit Points: " << hp;
    std::cout << "; Energy Points: " << e;
    std::cout << "; Attack Damage: " << a << std::endl;
}
