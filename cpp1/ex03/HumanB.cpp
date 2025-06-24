/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:48:59 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/20 23:41:20 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name) : _weapon(NULL)
{
	if (name.empty())
		this->_name = "Blud";
	else
		this->_name = name;
	std::cout << this->_name << " has joined the chat." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " has left the chat." << std::endl;
}

void	HumanB::attack()
{
	if (!this->_weapon)
		std::cout << this->_name << " just go look the sky because i cant fight :(" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}