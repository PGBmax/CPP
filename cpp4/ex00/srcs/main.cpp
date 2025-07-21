/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:37:36 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/21 17:50:49 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		std::cout << meta->getType() << std::endl;
		std::cout << j->getType() << std::endl;
		std::cout << i->getType() << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		

		delete meta;
		delete i;
		delete j;
	}
	std::cout << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		const WrongCat* j = new WrongCat();
		
		std::cout << meta->getType() << std::endl;
		std::cout << i->getType() << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		

		delete meta;
		delete i;
		delete j;
	}
}