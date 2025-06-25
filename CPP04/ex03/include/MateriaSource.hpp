/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:35:04 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 19:53:04 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_materia[4];

    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif /* MATERIASOURCE_HPP */
