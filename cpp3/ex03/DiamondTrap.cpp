/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:00:46 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/06 13:23:17 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string &name ) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	if (name.empty())
		this->_name = "John Doe";
	this->_attack = 30;
	this->_energy = 50;
	this->_hit = 100;
	std::cout << CYN << "[Constructor - DiamondTrap] " << this->_name << " has joined the chat." << std::endl << RST;
}

DiamondTrap::DiamondTrap( const DiamondTrap &copy ) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
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

void	DiamondTrap::attack( const std::string &target )
{
	std::string name = target;
	if (target.empty())
		name = "Punching Bag";
	if (this->_hit <= 0)
	{
		std::cout	<< RED
					<< "DiamondTrap "
					<< this->_name
					<< " is already dead. he can't attack."
					<< std::endl
					<< RST;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout	<< MAG
					<< "DiamondTrap "
					<< this->_name
					<< " has no energy left."
					<< std::endl
					<< RST;
		return ;
	}
	std::cout	<< YEL
				<< "DiamondTrap "
				<< this->_name
				<< " attacks "
				<< name
				<< ", causing "
				<< this->_attack
				<< " points of damage!" 
				<< std::endl
				<< RST;
	this->_energy -= 1;
}


void	DiamondTrap::whoAmI()
{
	std::cout << YEL << this->_name << " : Yo." << std::endl << RST;
}