/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:00:46 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/05 16:01:39 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string &name )
{
	this->_name = name;
	if (name.empty())
		this->_name = "John Doe";
	this->_attack = 20;
	this->_energy = 50;
	this->_hit = 100;
	std::cout << CYN << "[Constructor - DiamondTrap] " << this->_name << " has joined the chat." << std::endl << RST;
}

DiamondTrap::DiamondTrap( const DiamondTrap &copy )
{
	*this = copy;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &op )
{
	this->_name = op._name;
	this->_hit = op._hit;
	this->_energy = op._energy;
	this->_attack = op._attack;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	if (this->_hit <= 0)
		std::cout << CYN << "[Destructor - DiamondTrap] The Corpse of " << this->_name << " has left the chat." << std::endl << RST;	
	else
		std::cout << CYN << "[Destructor - DiamondTrap] " << this->_name << " has left the chat." << std::endl << RST;
}