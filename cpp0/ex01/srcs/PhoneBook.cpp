/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:45:19 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/24 11:38:39 by pboucher         ###   ########.fr       */
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

std::string	PhoneBook::_getInput(std::string input)
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
	std::string firstName = _getInput("First Name : ");
	if (firstName.empty())
		return ;
	std::string lastName = _getInput("Last Name : ");
	if (lastName.empty())
		return ;
	std::string nickname = _getInput("Nickname : ");
	if (nickname.empty())
		return ;
	std::string phoneNumber = _getInput("Phone number : ");
	if (phoneNumber.empty())
		return ;
	std::string darkestSecret = _getInput("Darkest secret : ");
	if (darkestSecret.empty())
		return ;
	this->_class[_index]	.setFirstName(firstName)
					.setLastName(lastName)
					.setNickname(nickname)
					.setPhoneNumber(phoneNumber)
					.setDarkestSecret(darkestSecret);
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
	_contactInfo(value);
}

void	PhoneBook::showPrompt()
{
	std::cout << MAG << "🥰 Welcome to the PhoneBook. 🥰" << RST << std::endl;
	std::cout << MAG << "Here is a list of how to use it:" << RST << std::endl;
	std::cout << MAG << "ADD	: for add contact on the PhoneBook" << RST << std::endl;
	std::cout << MAG << "SEARCH	: for get information about a contact" << RST << std::endl;
	std::cout << MAG << "EXIT	: only if you want to sadly leave the program 😔" << RST << std::endl;
}

void	PhoneBook::_printInfo(std::string info)
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
		_printInfo(index);
		std::cout << "┃";
		_printInfo(this->_class[i].getFirstName());
		std::cout << "┃";
		_printInfo(this->_class[i].getLastName());
		std::cout << "┃";
		_printInfo(this->_class[i].getNickname());
		std::cout << "┃" << std::endl;
	}
	std::cout << "┗━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┛" << std::endl;
}

void	PhoneBook::_contactInfo(int index)
{
	std::cout << WHT << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << std::endl;
	std::cout << "First Name	: " << this->_class[index].getFirstName() << std::endl;
	std::cout << "Last Name	: " << this->_class[index].getLastName() << std::endl;
	std::cout << "Nickname	: " << this->_class[index].getNickname() << std::endl;
	std::cout << "Phone Number	: " << this->_class[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret	: " << this->_class[index].getDarkestSecret() << std::endl;
	std::cout << "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━" << RST << std::endl;
}
