/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:37:36 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/22 15:30:14 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		AAnimal	**animals = new AAnimal*[10];
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
	{
		Cat	cat;
		{
			Cat catcpy = cat;
			std::cout << "catcpy's brain address: " << catcpy.getBrainAddress() << std::endl;
		}
		std::cout << "Cat's brain address: " << cat.getBrainAddress() << std::endl;
		
	}
	{
		Dog	dog;
		{
			Dog dogcpy = dog;
			std::cout << "dogcpy's brain address: " << dogcpy.getBrainAddress() << std::endl;
		}
		std::cout << "dog's brain address: " << dog.getBrainAddress() << std::endl;
		
	}
}
