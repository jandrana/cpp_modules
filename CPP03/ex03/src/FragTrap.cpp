/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:39:07 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 15:02:28 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    this->_name = "Unnamed";
    this->_hitPoints = _newHitPoints;
    this->_energyPoints = _newEnergyPoints;
    this->_attackDamage = _newAttackDamage;
    printInfo(this->_name, this->_hitPoints, this->_energyPoints, this->_attackDamage);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor FragTrap called" << std::endl;
    this->_name = name;
    this->_hitPoints = _newHitPoints;
    this->_energyPoints = _newEnergyPoints;
    this->_attackDamage = _newAttackDamage;
    printInfo(this->_name, this->_hitPoints, this->_energyPoints, this->_attackDamage);
}

FragTrap::~FragTrap()
{
    std::cout << "Destroyed FragTrap " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other._name)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    printInfo(this->_name, this->_hitPoints, this->_energyPoints, this->_attackDamage);
}

FragTrap& FragTrap::operator=(const FragTrap& other)
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

void FragTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else if (this->_energyPoints == 0)
        std::cout << "FragTrap " << this->_name << " is too exhausted to attack (no energy points left)." << std::endl;
    else
        std::cout << "FragTrap " << this->_name << " is dead, he cannot attack" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->_hitPoints > 0)
        std::cout << "FragTrap " << this->_name << " requests to high five" << std::endl;
    else
        std::cout << "FragTrap " << this->_name << " cannot request to high five because he is dead." << std::endl;
}

void FragTrap::printInfo(std::string name, unsigned int hp, unsigned int e, unsigned int a)
{
    std::cout << "[FRAGTRAP INFO " << name << "]:";
    std::cout << " Hit Points: " << hp;
    std::cout << "; Energy Points: " << e;
    std::cout << "; Attack Damage: " << a << std::endl;
}