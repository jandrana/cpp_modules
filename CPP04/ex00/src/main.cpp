/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:35:04 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 15:45:34 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << animal->getType() << " type" << std::endl;
	std::cout << dog->getType() << " type" << std::endl;
	std::cout << cat->getType() << " type" << std::endl;
	std::cout << wrongAnimal->getType() << " type" << std::endl;
	std::cout << wrongCat->getType() << " type" << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	wrongCat->makeSound();
	wrongAnimal->makeSound();
	
	delete animal;
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat;
	return (0);
}