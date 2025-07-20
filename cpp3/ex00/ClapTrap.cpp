/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 10:18:32 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/17 15:37:58 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( const std::string &name )
{
	this->_name = name;
	if (name.empty())
		this->_name = "John Doe";
	this->_attack = 0;
	this->_energy = 10;
	this->_hit = 10;
	std::cout << CYN << "[Constructor] " << this->_name << " has joined the chat." << std::endl << RST;
}

ClapTrap::ClapTrap( const ClapTrap &copy )
{
	*this = copy;
	std::cout << CYN << "[Constructor Copy] " << this->_name << " has joined the chat." << std::endl << RST;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &op )
{
	this->_name = op._name;
	this->_hit = op._hit;
	this->_energy = op._energy;
	this->_attack = op._attack;
	std::cout << CYN << "[Constructor Copy Assignment] " << this->_name << " has joined the chat." << std::endl << RST;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	if (this->_hit <= 0)
		std::cout << CYN << "[Destructor] The Corpse of " << this->_name << " has left the chat." << std::endl << RST;	
	else
		std::cout << CYN << "[Destructor] " << this->_name << " has left the chat." << std::endl << RST;
}

void	ClapTrap::attack( const std::string &target )
{
	std::string name = target;
	if (target.empty())
		name = "Punching Bag";
	if (this->_hit <= 0)
	{
		std::cout	<< RED
					<< "ClapTrap "
					<< this->_name
					<< " is already dead. he can't attack."
					<< std::endl
					<< RST;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout	<< MAG
					<< "ClapTrap "
					<< this->_name
					<< " has no energy left."
					<< std::endl
					<< RST;
		return ;
	}
	std::cout	<< YEL
				<< "ClapTrap "
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

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hit <= 0)
	{
		std::cout	<< RED
					<< "ClapTrap "
					<< this->_name
					<< " is already dead. he can't heal himself."
					<< std::endl
					<< RST;
		return ;
	}
	if (this->_energy == 0)
	{
		std::cout	<< MAG
					<< "ClapTrap "
					<< this->_name
					<< " has no energy left."
					<< std::endl
					<< RST;
		return ;
	}
	std::cout	<< BLU
				<< "ClapTrap "
				<< this->_name
				<< " repaired himself"
				<< ", giving to him "
				<< amount
				<< " hit points!" 
				<< std::endl
				<< RST;
	this->_hit += amount;
	this->_energy -= 1;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hit <= 0)
	{
		std::cout	<< RED
					<< "ClapTrap "
					<< this->_name
					<< " is already dead. he can't take damage anymore."
					<< std::endl
					<< RST;
		return ;
	}
	std::cout	<< YEL
				<< "ClapTrap "
				<< this->_name
				<< " taked "
				<< amount
				<< " points of damage!" 
				<< std::endl
				<< RST;
	if (amount >= this->_hit)
		this->_hit = 0;
	else
		this->_hit -= amount;
	if (this->_hit <= 0)
	{
		std::cout	<< RED
					<< "Saddly, ClapTrap "
					<< this->_name
					<< " brutaly died of his injuries :("
					<< std::endl
					<< RST;
	}
}

void	ClapTrap::showStats()
{
	std::cout << GRN;
	std::cout << "[Name]   " << this->_name << std::endl;
	std::cout << "[Health] " << this->_hit << std::endl;
	std::cout << "[Energy] " << this->_energy << std::endl;
	std::cout << "[Attack] " << this->_attack << std::endl;
	std::cout << RST;
}