/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 03:02:15 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/25 02:55:29 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout	<< YEL << "[ DEBUG ]" << RST << std::endl;
	std::cout	<< YEL << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
				<< RST << std::endl << std::endl;
}

void	Harl::info()
{
	std::cout	<< BLU << "[ INFO ]" << RST << std::endl;
	std::cout	<< BLU << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
				<< RST << std::endl << std::endl;
}

void	Harl::warning()
{
	std::cout	<< MAG << "[ WARNING ]" << RST << std::endl;
	std::cout	<< MAG << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
				<< RST << std::endl << std::endl;
}

void	Harl::error()
{
	std::cout << CYN << "[ ERROR ]" << RST << std::endl;
	std::cout << CYN << "This is unacceptable! I want to speak to the manager now." << RST << std::endl << std::endl;
}

void	Harl::complain( std::string level )
{
	int i = 0;
	for (; this->_level[i] != level && i < 4; i++)
		;
	switch (i)
	{
		case 0:
			this->debug();
			HARL_FALLTHROUGH;
		case 1:
			this->info();
			HARL_FALLTHROUGH;
		case 2:
			this->warning();
			HARL_FALLTHROUGH;
		case 3:
			this->error();
			break;
		default:
			std::cout << RED << "[ Nah bro you chillin ]" << RST << std::endl;
			break;
	};
}