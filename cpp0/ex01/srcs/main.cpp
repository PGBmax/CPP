/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:06:32 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/24 11:29:33 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook PhoneBook;
	std::string	input;

	PhoneBook.showPrompt();
	while (!std::cin.eof() && input != "EXIT")
	{
		std::cout << BLU << "[PhoneBook] » " << RST;
		std::getline(std::cin, input);
		if (input == "ADD")
			PhoneBook.add();
		else if (input == "SEARCH")
			PhoneBook.search();
	}
	if (std::cin.eof())
		std::cout << "" << std::endl;
	std::cout << MAG << "😔 Goodbye friend. 😔" << RST << std::endl;
}