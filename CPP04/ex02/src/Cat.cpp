/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:35:04 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 14:33:31 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
    std::cout << "Default constructor called (" << this->type << ")" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor called (" << this->type << ")" << std::endl;
    delete this->_brain;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        this->_brain = new Brain(*other._brain);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "[Miau]" << std::endl;
}

void Cat::setIdeas(std::string idea, int pos) const
{
    if (pos < 100)
        this->_brain->setIdeas(idea, pos);
}

std::string Cat::getIdeas(int pos) const
{
    if (pos < 100)
        return (this->_brain->getIdeas(pos));
    return ("Cannot have more than 100 ideas");
}
