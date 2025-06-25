/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cast <ana-cast@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:35:04 by ana-cast          #+#    #+#             */
/*   Updated: 2025/06/25 20:21:23 by ana-cast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
	//const Animal* animal = new Animal();
	const Dog* dog = new Dog();
	const Cat* cat = new Cat();
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << dog->getType() << " type"<< std::endl;
	std::cout << cat->getType() << " type" << std::endl;
	std::cout << wrongAnimal->getType() << " type"<< std::endl;
	std::cout << wrongCat->getType() << " type" << std::endl;
	
	dog->makeSound();
	cat->makeSound();
	wrongCat->makeSound();
	wrongAnimal->makeSound();
	
	dog->setIdeas("walk", 0);
	dog->setIdeas("run", 3);
	cat->setIdeas("jump", 1);
	cat->setIdeas("sleep", 4);
	std::cout << "Dog and cat ideas:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Dog(" << i << "): " << dog->getIdeas(i);
		std::cout << "; Cat(" << i << "): " << cat->getIdeas(0) << std::endl;
	}
	std::cout << "[BAD IDEA] Dog(123): " << dog->getIdeas(123) << std::endl;
	
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat;
	return (0);
}
