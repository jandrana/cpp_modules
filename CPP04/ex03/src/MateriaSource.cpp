/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:35:04 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 19:52:58 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    //std::cout << "MateriaSource Default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    //std::cout << "MateriaSource Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] != NULL)
            delete this->_materia[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    //std::cout << "MateriaSource Copy constructor called" << std::endl;
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    //std::cout << "MateriaSource Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (other._materia[i] != NULL)
                this->_materia[i] = other._materia[i]->clone();
            else
                this->_materia[i] = NULL;
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *a)
{
    if (a == NULL)
    {
        std::cout << "Cannot learn a NULL materia" << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] == NULL)
        {
            this->_materia[i] = a;
            std::cout << "Materia " << a->getType() << " learned" << std::endl;
            return ;
        }
    }
    delete a;
    std::cout << "Cannot learn more than 4 materia" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
            return (this->_materia[i]->clone());
    }
    return (0);
}
