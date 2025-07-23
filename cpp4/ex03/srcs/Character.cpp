/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:12:56 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 12:35:30 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name)
{
	_name = name;
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	_invIndex = 0;
	_storageLen = 0;
	_storage = new AMateria*[_storageLen];
	if (DEBUG)
		std::cout << "Character Constructor Called" << std::endl;
}

Character::Character(const Character &cpy)
{
	*this = cpy;
	if (DEBUG)
		std::cout << "Character Constructor Copy Called" << std::endl;
}

Character&	Character::operator=(const Character &cpy)
{
	_name = cpy.getName();
	for (int i = 0; i < _storageLen; ++i)
		if (_storage[i])
			delete (_storage[i]);
	delete [] _storage;
	_storage = new AMateria*[cpy._invIndex];
	for (int i = 0; i < cpy._invIndex; ++i)
	{
		_storage[i] = cpy._inventory[i]->clone();
		_inventory[i] = _storage[i];
	}
	for (int i = cpy._invIndex; i < 4; ++i)
		_inventory[i] = NULL;
	_storageLen = cpy._invIndex;
	if (DEBUG)
		std::cout << "Character Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < _storageLen; ++i)
		if (_storage[i])
			delete (_storage[i]);
	if (DEBUG)
		std::cout << "Character Destructor Called" << std::endl;
	delete [] _storage;
}

std::string const	&Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		std::cout << "Cannot Equip NULL AMateria" << std::endl;
	else
	{
		AMateria	**temp = new AMateria*[_storageLen + 1];
		for (int i = 0; i < _storageLen; ++i)
			temp[i] = _storage[i];
		delete [] _storage;
		temp[_storageLen] = m;
		_storage = temp;
		if (_invIndex == 4)
			std::cout << "Your inventory is already full" << std::endl;
		else
		{
			_inventory[_invIndex] = temp[_storageLen];
			_invIndex++;
		}
		_storageLen++;
	}
}

void	Character::unequip(int idx)
{
	if (_invIndex == 0)
		std::cout << "You have nothing to unequip" << std::endl;
	else if (idx < 0 || idx >= _invIndex)
		std::cout << "Invalid Index" << std::endl;
	else
	{
		for (int i = idx; i < 3; ++i)
			_inventory[i] = _inventory[i + 1];
		_inventory[3] = NULL;
		_invIndex--;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (_invIndex == 0)
		std::cout << "You have nothing to use" << std::endl;
	else if (idx < 0 || idx >= _invIndex)
		std::cout << "Invalid Index" << std::endl;
	else
	{
		std::cout << "* ";
		_inventory[idx]->use(target);
	}
}
