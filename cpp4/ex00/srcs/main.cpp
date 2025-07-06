/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:06:32 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/06 14:13:20 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << YEL << meta->getType() << " " << std::endl << RST;
	std::cout << YEL << j->getType() << " " << std::endl << RST;
	std::cout << YEL << i->getType() << " " << std::endl << RST;

	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	delete meta;
	delete i;
	delete j;
	return 0;
}