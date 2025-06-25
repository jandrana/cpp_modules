/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 18:39:13 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 15:13:48 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Malaga("Malaga");
	ClapTrap Sevilla;
	ClapTrap Granada(Malaga);

	Malaga.attack("Sevilla");
	Sevilla.takeDamage(0);

	for (int i = 0; i < 15; i++)
		Sevilla.attack("Granada");
	
	for (int i = 0; i < 12; i++)
		Malaga.beRepaired(1);

	for (int i = 0; i < 12; i++)
	{
		Granada.takeDamage(2);
		Granada.beRepaired(1);
	}
	return (0);
}