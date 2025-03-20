/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:48:42 by pboucher          #+#    #+#             */
/*   Updated: 2025/03/20 18:12:40 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

static void	add_to_phonebook(void)
{
	std::cout << RED "First Name     > John" << std::endl;
	std::cout << "Last Name      > Pork" << std::endl;
	std::cout << "Nickname       > Johnny" << std::endl;
	std::cout << "Phone Number   > 06 69 69 69 69" << std::endl;
	std::cout << "Darkest Secret > He is racist" RESET << std::endl;
}

static void print_phonebook(void)
{
	std::cout << BLUE;
	std::cout << "╔══════════╦══════════╦══════════╦══════════╗" << std::endl;
	std::cout << "║Person  ID║First Name║Last  Name║ Nickname ║" << std::endl;
	std::cout << "╠══════════╬══════════╬══════════╬══════════╣" << std::endl;
	std::cout << "║        1 ║     John ║     Pork ║   Johnny ║" << std::endl;
	std::cout << "║          ║          ║          ║          ║" << std::endl;
	std::cout << "║          ║          ║          ║          ║" << std::endl;
	std::cout << "║          ║          ║          ║          ║" << std::endl;
	std::cout << "║          ║          ║          ║          ║" << std::endl;
	std::cout << "║          ║          ║          ║          ║" << std::endl;
	std::cout << "║          ║          ║          ║          ║" << std::endl;
	std::cout << "║          ║          ║          ║          ║" << std::endl;
	std::cout << "╚══════════╩══════════╩══════════╩══════════╝" << std::endl;
	std::cout << RESET;
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
		else if (input == "SEARCH")
			print_phonebook();
		else if (input == "EXIT")
		{
			std::cout << MAGENTA "Bye bye from the phonebook 🥰" RESET << std::endl;
			return (0);
		}
		else
			std::cout << input << std::endl;
	}
}
