/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:39:13 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 15:21:46 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap Malaga("Malaga");
	ClapTrap Sevilla("Sevilla");
	ScavTrap Granada("Granada");

	Malaga.attack("Sevilla");
	Sevilla.takeDamage(20);

	for (int i = 0; i < 15; i++)
		Sevilla.attack("Granada");
	
	Granada.attack("Malaga");
	Malaga.takeDamage(20);
	for (int i = 0; i < 12; i++)
		Malaga.beRepaired(1);

	for (int i = 0; i < 12; i++)
	{
		Malaga.attack("Granada");
		Granada.takeDamage(20);
		Granada.beRepaired(10);
	}
	Malaga.highFivesGuys();
	Granada.guardGate();
	return (0);
}
