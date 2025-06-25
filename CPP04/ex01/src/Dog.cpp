/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:35:04 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 14:32:15 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
    std::cout << "Default constructor called (" << this->type << ")" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor called (" << this->type << ")" << std::endl;
    delete this->_brain;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        this->_brain = new Brain(*other._brain);
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "[Guau]" << std::endl;
}

void Dog::setIdeas(std::string idea, int pos) const
{
    if (pos < 100)
        this->_brain->setIdeas(idea, pos);
}

std::string Dog::getIdeas(int pos) const
{
    if (pos < 100)
        return (this->_brain->getIdeas(pos));
    return ("Cannot have more than 100 ideas");
}
