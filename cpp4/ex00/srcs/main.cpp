/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:37:36 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 13:16:25 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << GRN << "--- Correct Polymorphism Test ---" << RST <<std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << GRN << "getType() = "<< meta->getType() << RST << std::endl;
		std::cout << GRN << "getType() = "<< j->getType() << RST << std::endl;
		std::cout << GRN << "getType() = "<< i->getType() << RST << std::endl;

		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
		delete j;
	}
    std::cout << MAG << std::endl << "--- Wrong Polymorphism Test ---" << RST << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		
		std::cout << GRN << "getType() = "<< meta->getType() << RST << std::endl;
		std::cout << GRN << "getType() = "<< i->getType() << RST << std::endl;

		i->makeSound();
		meta->makeSound();
		
		delete meta;
		delete i;
	}
}