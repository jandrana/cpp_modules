/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:35:04 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 20:16:55 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
    //std::cout << "Character Constructor called" << std::endl;
    this->_name = name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    for (int i = 0; i < 42; i++)
        this->_forgotten[i] = NULL;
}

Character::Character()
{
    //std::cout << "Character Default constructor called" << std::endl;
    this->_name = "Unknown";
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    for (int i = 0; i < 42; i++)
        this->_forgotten[i] = NULL;
}

Character::~Character()
{
    //std::cout << "Character Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != NULL)
            delete this->_inventory[i];
    }
    for (int i = 0; i < 42; i++)
    {
        if (this->_forgotten[i] != NULL)
            delete this->_forgotten[i];
    }
}

Character::Character(const Character& other)
{
    //std::cout << "Character Copy constructor called" << std::endl;
    *this = other;
}

Character& Character::operator=(const Character& other)
{
    //std::cout << "Character Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < 4; i++)
        {
            if (other._inventory[i] != NULL)
                this->_inventory[i] = other._inventory[i]->clone();
            else
                this->_inventory[i] = NULL;
        }
        for (int i = 0; i < 42; i++)
        {
            if (other._forgotten[i] != NULL)
                this->_forgotten[i] = other._forgotten[i]->clone();
            else
                this->_forgotten[i] = NULL;
        }
    }
    return (*this);
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    //std::cout << "Character member function equip()" << std::endl;
    int i = 0;
    while (i < 4 && this->_inventory[i] != NULL)
        i++;
    if (i < 4)
    {
        this->_inventory[i] = m;
        std::cout << "Equipped item " << m->getType() << " in slot " << i << std::endl;
    }
    else
    {
        std::cout << "Inventory full, cannot take another materia" << std::endl;
        delete m;
    }
}

void Character::unequip(int idx)
{
    //std::cout << "Character member function unequip()" << std::endl;
    if (idx < 4 && idx >= 0 && this->_inventory[idx] != NULL)
    {
        int i = 0;
        while (i < 42 && this->_forgotten[i] != NULL)
            i++;
        if (i < 42)
        {
            this->_forgotten[i] = this->_inventory[idx];
            this->_inventory[idx] = NULL;
            std::cout << "Unequiped item in slot " << idx << std::endl;
        }
        else
            std::cout << "There are too many unequipped items" << std::endl;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 4 && idx > 0 && this->_inventory[idx] != NULL)
        this->_inventory[idx]->use(target);
    else
        std::cout << "There is no item equipped in the slot " << idx << std::endl;
}
