/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:37:36 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 13:37:35 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << GRN << "--- Array Test ---" << RST << std::endl;
	{
		Animal	**animals = new Animal*[10];
		for (int i = 0; i < 10; ++i)
		{
			if (i < 5)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
		}
		for (int i = 0; i < 10; ++i)
		{
			animals[i]->makeSound();
			delete animals[i];
		}
		delete []animals;
	}
	std::cout << MAG << "--- DeepCopy Test ---" << RST << std::endl;
	{
		Cat	cat;
		{
			Cat catcpy = cat;
			std::cout << RED << "catcpy's brain address: " << catcpy.getBrainAddress() << RST << std::endl;
		}
		std::cout << RED << "Cat's brain address: " << cat.getBrainAddress() << RST << std::endl;
		
	}
	{
		Dog	dog;
		{
			Dog dogcpy = dog;
			std::cout << RED << "dogcpy's brain address: " << dogcpy.getBrainAddress() << RST << std::endl;
		}
		std::cout << RED << "dog's brain address: " << dog.getBrainAddress() << RST << std::endl;
		
	}
}
