/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:45:19 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/19 02:38:39 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"

void	PhoneBook::add(void)
{
	std::string first_name;
	std::cout << "First Name : ";
	std::getline(std::cin, first_name);
	while (!std::cin.eof() && first_name.size() == 0)
	{
		std::cout << CYN << "Please enter something or I will molest you" << RST << std::endl;
		std::cout << "First Name : ";
		std::getline(std::cin, first_name);
	}
	std::cout << RED << "Get scammed, now i know your name is " << first_name << std::endl;
	this->_class[0].set_first_name(first_name);
}
