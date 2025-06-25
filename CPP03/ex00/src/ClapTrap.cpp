/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:39:07 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 10:22:30 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
    printInfo(_name, _hitPoints, _energyPoints, _attackDamage);
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
    std::cout << "Constructor called" << std::endl;
    printInfo(_name, _hitPoints, _energyPoints, _attackDamage);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destroyed ClapTrap " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    printInfo(_name, _hitPoints, _energyPoints, _attackDamage);
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
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

void ClapTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else if (this->_energyPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is too exhausted to attack (no energy points left)." << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " is dead, he cannot attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "[ATTACK INFO] Victim: " << this->_name << "; Amount: " << amount << std::endl;
    if (this->_hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name << " has been attacked and received " << amount << " points of damage!" << std::endl;
        this->_hitPoints -= amount;
    }
    else
        std::cout << "ClapTrap " << this->_name << " is dead, the attack made no damage" << std::endl;
    printInfo(_name, _hitPoints, _energyPoints, _attackDamage);
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "[REPAIR INFO] Name: " << this->_name << "; Amount: " << amount << std::endl;
    if (this->_hitPoints > 0 && this->_energyPoints > 0)
    {
        this->_hitPoints += amount;
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " succesfully repaired gaining " << amount << " hit points!" << std::endl;
    }
    else if (this->_energyPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is too exhausted to repair (no energy points left)." << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " is dead, he cannot repair" << std::endl;
    printInfo(_name, _hitPoints, _energyPoints, _attackDamage);
}

void ClapTrap::printInfo(std::string name, unsigned int hp, unsigned int e, unsigned int a)
{
    std::cout << "[INFO " << name << "]:";
    std::cout << " Hit Points: " << hp;
    std::cout << "; Energy Points: " << e;
    std::cout << "; Attack Damage: " << a << std::endl;
}