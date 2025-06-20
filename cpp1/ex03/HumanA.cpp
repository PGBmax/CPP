/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:39:27 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/20 17:30:14 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->_name = name;
	this->_weapon = weapon;
	std::cout << this->_name << "joined the chat." << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name << "left the chat." << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << "attacks with their " << this->_weapon.getType() << std::endl;
}