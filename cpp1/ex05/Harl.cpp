/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 03:02:15 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/25 02:44:07 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << GRN << "Wassup guys, Harl here." << RST << std::endl;
	this->_msg[0] = &Harl::debug;
	this->_msg[1] = &Harl::info;
	this->_msg[2] = &Harl::warning;
	this->_msg[3] = &Harl::error;
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";
}

Harl::~Harl()
{
	std::cout << RED << "Harl never dies." << RST << std::endl;
}

void	Harl::complain( std::string level )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_level[i] == level)
		{
			(this->*_msg[i])();
			return ;
		}
	}
	std::cout << RED << "Nah bro stop abuse of your power" << RST << std::endl;
}

void	Harl::debug()
{
	std::cout << YEL << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RST << std::endl;
}

void	Harl::info()
{
	std::cout << BLU << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RST << std::endl;
}

void	Harl::warning()
{
	std::cout << MAG << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << RST << std::endl;
}

void	Harl::error()
{
	std::cout << CYN << "This is unacceptable! I want to speak to the manager now." << RST << std::endl;
}