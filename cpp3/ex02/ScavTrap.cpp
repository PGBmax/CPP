/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 11:13:42 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/17 15:42:26 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string &name ) : ClapTrap(name)
{
	this->_name = name;
	if (name.empty())
		this->_name = "John Doe";
	this->_attack = 20;
	this->_energy = 50;
	this->_hit = 100;
	std::cout << CYN << "[Constructor - ScavTrap] " << this->_name << " has joined the chat." << std::endl << RST;
}

ScavTrap::ScavTrap( const ScavTrap &copy ) : ClapTrap(copy)
{
	*this = copy;
	std::cout << CYN << "[Constructor Copy - ScavTrap] " << this->_name << " has joined the chat." << std::endl << RST;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &op )
{
	this->_name = op._name;
	this->_hit = op._hit;
	this->_energy = op._energy;
	this->_attack = op._attack;
	std::cout << CYN << "[Constructor Copy Assignment - ScavTrap] " << this->_name << " has joined the chat." << std::endl << RST;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	if (this->_hit <= 0)
		std::cout << CYN << "[Destructor - ScavTrap] The Corpse of " << this->_name << " has left the chat." << std::endl << RST;	
	else
		std::cout << CYN << "[Destructor - ScavTrap] " << this->_name << " has left the chat." << std::endl << RST;
}

void	ScavTrap::attack( const std::string &target )
{
	std::string name = target;
	if (target.empty())
		name = "Punching Bag";
	if (this->_hit <= 0)
	{
		std::cout	<< RED
					<< "ScavTrap "
					<< this->_name
					<< " is already dead. he can't attack."
					<< std::endl
					<< RST;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout	<< MAG
					<< "ScavTrap "
					<< this->_name
					<< " has no energy left."
					<< std::endl
					<< RST;
		return ;
	}
	std::cout	<< YEL
				<< "ScavTrap "
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

void	ScavTrap::guardGate()
{
	if (this->_hit <= 0)
	{
		std::cout	<< RED
					<< "ScavTrap "
					<< this->_name
					<< " is already dead. he can't switch to Gate keeper mode."
					<< std::endl
					<< RST;
		return ;
	}
	std::cout	<< YEL
				<< "ScavTrap "
				<< this->_name
				<< " is now in Gate keeper mode."
				<< std::endl
				<< RST;
}