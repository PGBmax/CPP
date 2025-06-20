/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:45:19 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/20 14:25:30 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
}

PhoneBook::~PhoneBook()
{
}

std::string	PhoneBook::_get_input(std::string input)
{
	std::string info;

	std::cout << input;
	std::getline(std::cin, info);
	while (!std::cin.eof() && info.size() == 0)
	{
		std::cout << CYN << "Please enter something or you go to jail" << RST << std::endl;
		std::cout << input;
		std::getline(std::cin, info);
	}
	return (info);
}

void	PhoneBook::add()
{
	std::string first_name = _get_input("First Name : ");
	if (first_name.empty())
		return ;
	std::string last_name = _get_input("Last Name : ");
	if (last_name.empty())
		return ;
	std::string nick_name = _get_input("Nickname : ");
	if (nick_name.empty())
		return ;
	std::string phone_number = _get_input("Phone number : ");
	if (phone_number.empty())
		return ;
	std::string darkest_secret = _get_input("Darkest secret : ");
	if (darkest_secret.empty())
		return ;
	this->_class[_index]	.set_first_name(first_name)
					.set_last_name(last_name)
					.set_nick_name(nick_name)
					.set_phone_number(phone_number)
					.set_darkest_secret(darkest_secret);
	this->_index++;
	this->_index = _index % 8;
}

void	PhoneBook::search()
{
	std::string input;
	int			value = -1;

	_show();
	std::cout << "Which contact do you want to know infos ? (0-7)" << std::endl;
	std::cout << "Enter ID : ";
	std::getline(std::cin, input);
	if (input[0] && input[0] >= '0' && input[0] <= '7')
		value = input[0] - 48;
	while (value == -1 || input.size() != 1)
	{
		if (std::cin.eof())
			return ;
		value = -1;
		std::cout << CYN << "Please enter a digit between 0 and 7 or you go to jail" << RST << std::endl;
		std::cout << "Enter ID : ";
		std::getline(std::cin, input);
		if (input[0] && input[0] >= '0' && input[0] <= '7')
			value = input[0] - 48;
	}
	_contact_info(value);
}

void	PhoneBook::show_prompt()
{
	std::cout << MAG << "🥰 Welcome to the PhoneBook. 🥰" << RST << std::endl;
	std::cout << MAG << "Here is a list of how to use it:" << RST << std::endl;
	std::cout << MAG << "ADD	: for add contact on the PhoneBook" << RST << std::endl;
	std::cout << MAG << "SEARCH	: for get information about a contact" << RST << std::endl;
	std::cout << MAG << "EXIT	: only if you want to sadly leave the program 😔" << RST << std::endl;
}

void	PhoneBook::_print_info(std::string info)
{
	if (info.size() > 10)
		info = info.erase(9).append(".");
	std::cout	<< std::setw(10) << std::setfill(' ') << info;
}

void	PhoneBook::_show()
{
	std::cout << "┏━━━━━━━━━━┳━━━━━━━━━━┳━━━━━━━━━━┳━━━━━━━━━━┓" << std::endl;
	std::cout << "┃    ID    ┃First Name┃Last  Name┃ Nickname ┃" << std::endl;
	std::cout << "┣━━━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━━┫" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "┃";
		std::string index;
		index = i + 48;
		_print_info(index);
		std::cout << "┃";
		_print_info(this->_class[i].get_first_name());
		std::cout << "┃";
		_print_info(this->_class[i].get_last_name());
		std::cout << "┃";
		_print_info(this->_class[i].get_nick_name());
		std::cout << "┃" << std::endl;
	}
	std::cout << "┗━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┛" << std::endl;
}

void	PhoneBook::_contact_info(int index)
{
	std::cout << WHT << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << std::endl;
	std::cout << "First Name	: " << this->_class[index].get_first_name() << std::endl;
	std::cout << "Last Name	: " << this->_class[index].get_last_name() << std::endl;
	std::cout << "Nickname	: " << this->_class[index].get_nick_name() << std::endl;
	std::cout << "Phone Number	: " << this->_class[index].get_phone_number() << std::endl;
	std::cout << "Darkest Secret	: " << this->_class[index].get_darkest_secret() << std::endl;
	std::cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << RST << std::endl;
}
