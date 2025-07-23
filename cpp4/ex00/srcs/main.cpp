/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:37:36 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 12:11:35 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "--- Correct Polymorphism Test ---" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << "getType() = "<< meta->getType() << std::endl;
		std::cout << "getType() = "<< j->getType() << std::endl;
		std::cout << "getType() = "<< i->getType() << std::endl;

		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
		delete j;
	}
    std::cout << std::endl << "--- Wrong Polymorphism Test ---" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		
		std::cout << "getType() = "<< meta->getType() << std::endl;
		std::cout << "getType() = "<< i->getType() << std::endl;

		i->makeSound();
		meta->makeSound();
		
		delete meta;
		delete i;
	}
}