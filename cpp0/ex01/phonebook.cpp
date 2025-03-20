/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:48:42 by pboucher          #+#    #+#             */
/*   Updated: 2025/03/20 17:33:39 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static void	add_to_phonebook(void)
{
	std::cout << RED "Oh, you want to add someone in the Phonebook ?" << std::endl;
	std::cout << "first name       > John" << std::endl;
	std::cout << "last name        > Pork" << std::endl;
	std::cout << "nickname         > Johnny" << std::endl;
	std::cout << "phone number     > 06 69 69 69 69" << std::endl;
	std::cout << "darkest secret   > He eats pig" RESET << std::endl;
}

int main(void)
{
	std::string input;
	std::cout << BLUE "Welcome to the phonebook 🥰" << std::endl;
	while (1)
	{
		std::cout << YELLOW "phonebook > " RESET;
		std::cin >> input;
		if (input == "ADD")
			add_to_phonebook();
		else if (input == "EXIT")
		{
			std::cout << MAGENTA "Bye bye from the phonebook 🥰" RESET << std::endl;
			return (0);
		}
		else
			std::cout << input << std::endl;
	}
}
