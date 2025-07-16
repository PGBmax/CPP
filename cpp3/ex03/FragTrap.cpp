/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 17:07:14 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/16 14:44:18 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string &name ) : ClapTrap(name)
{
	this->_name = name;
	if (name.empty())
		this->_name = "John Doe";
	this->_attack = 30;
	this->_energy = 100;
	this->_hit = 100;
	std::cout << CYN << "[Constructor - FragTrap] " << this->_name << " has joined the chat." << std::endl << RST;
}

FragTrap::FragTrap( const FragTrap &copy ) : ClapTrap(copy)
{
	*this = copy;
}

FragTrap	&FragTrap::operator=( const FragTrap &op )
{
	this->_name = op._name;
	this->_hit = op._hit;
	this->_energy = op._energy;
	this->_attack = op._attack;
	return (*this);
}

FragTrap::~FragTrap()
{
	if (this->_hit <= 0)
		std::cout << CYN << "[Destructor - FragTrap] The Corpse of " << this->_name << " has left the chat." << std::endl << RST;	
	else
		std::cout << CYN << "[Destructor - FragTrap] " << this->_name << " has left the chat." << std::endl << RST;
}

void	FragTrap::attack( const std::string &target )
{
	std::string name = target;
	if (target.empty())
		name = "Punching Bag";
	if (this->_hit <= 0)
	{
		std::cout	<< RED
					<< "FragTrap "
					<< this->_name
					<< " is already dead. he can't attack."
					<< std::endl
					<< RST;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout	<< MAG
					<< "FragTrap "
					<< this->_name
					<< " has no energy left."
					<< std::endl
					<< RST;
		return ;
	}
	std::cout	<< YEL
				<< "FragTrap "
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

void	FragTrap::highFivesGuys()
{
	if (this->_hit <= 0)
	{
		std::cout	<< RED
					<< "FragTrap "
					<< this->_name
					<< " is already dead. he can't high Fives with guys :("
					<< std::endl
					<< RST;
		return ;
	}
	std::cout	<< YEL
				<< "FragTrap "
				<< this->_name
				<< " is high fiving guys !"
				<< std::endl
				<< RST;
}