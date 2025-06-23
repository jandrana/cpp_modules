/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:10:21 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/23 16:48:43 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    std::string name;

    std::cout << "New Stack Zombie. Please enter name: " << std::flush;
    std::cin >> name;
    Zombie zombi1(name);
    
    
    std::cout << "New Heap Zombie. Please enter name: " << std::flush;
    std::cin >> name;
    Zombie *zombi2 = newZombie(name);

    std::cout << "Calling announce for both Zombies." << std::endl;
    zombi1.announce();
    zombi2->announce();
    
    std::cout << "Calling randomChump()." << std::endl;
    randomChump("randi");

    delete zombi2;
    return (0);
}
