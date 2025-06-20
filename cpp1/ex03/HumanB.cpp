/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:48:59 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/20 17:32:07 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
	this->_name = name;
	std::cout << this->_name << "joined the chat." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->_name << "left the chat." << std::endl;
}

void	HumanB::attack()
{
	std::cout << this->_name << "attacks with their " << this->_weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}