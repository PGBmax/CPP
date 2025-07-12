/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:48:59 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/12 01:18:05 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL)
{
	if (name.empty())
		this->_name = "Blud";
	else
		this->_name = name;
	std::cout << GRN << this->_name << " has joined the chat." << RST << std::endl;
}

HumanB::~HumanB()
{
	std::cout << RED << this->_name << " has left the chat." << RST << std::endl;
}

void	HumanB::attack()
{
	if (!this->_weapon)
		std::cout << CYN << this->_name << " just go look the sky because i cant fight :(" << RST << std::endl;
	else
		std::cout << CYN << this->_name << " attacks with their " << this->_weapon->getType() << RST << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}