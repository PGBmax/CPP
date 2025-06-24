/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:39:27 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/24 11:14:00 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : _weapon(weapon)
{
	if (name.empty())
		this->_name = "Goofy aaaah Human";
	else
		this->_name = name;
	std::cout << this->_name << " has joined the chat." << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " has left the chat." << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}