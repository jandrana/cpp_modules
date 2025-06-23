/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:28:50 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/23 16:53:38 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string> 

class Zombie {
    private:
        std::string _name;

    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();

        void    announce(void);
        void    setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif /* ZOMBIE_HPP */