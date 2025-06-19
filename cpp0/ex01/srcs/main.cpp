/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:06:32 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/19 02:33:58 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "PhoneBook.hpp"

void show_prompt()
{
	std::cout << MAG << "🥰 Welcome to the PhoneBook. 🥰" << RST << std::endl;
	std::cout << MAG << "Here is a list of how to use it:" << RST << std::endl;
	std::cout << MAG << "ADD : for add contact on the PhoneBook" << RST << std::endl;
	std::cout << MAG << "SEARCH : for get information about a contact" << RST << std::endl;
	std::cout << MAG << "EXIT : only if you want to sadly leave the program 😔" << RST << std::endl;
}

int main()
{
	PhoneBook PhoneBook;
	std::string	input;

	show_prompt();
	while (!std::cin.eof() && input != "EXIT")
	{
		std::cout << BLU << "[PhoneBook] » " << RST;
		getline(std::cin, input);
		if (input == "ADD")
			PhoneBook.add();
		else if (input == "SEARCH")
			std::cout << "nah use google bro" << RST << std::endl;
	}
	std::cout << std::endl;
	std::cout << MAG << "😔 Goodbye friend. 😔" << RST << std::endl;
}