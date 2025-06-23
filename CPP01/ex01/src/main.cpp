/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:28:59 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/23 17:03:20 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static Zombie *newHorde(int N, std::string name)
{
    Zombie *horde = zombieHorde(N, name);

    for (int i = 0; i < N; i++)
        horde[i].announce();
    return (horde);
}

int main( void )
{
   Zombie *horde1 = newHorde(1, "Lonely Zombie");
   Zombie *horde12 = newHorde(12, "Horde of 12 Zombies");
   Zombie *horde21 = newHorde(21, "Horde of 21 Zombies");

   delete []horde1;
   delete []horde12;
   delete []horde21;
   return (0);
}