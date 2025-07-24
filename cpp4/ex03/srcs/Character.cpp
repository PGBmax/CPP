/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:12:56 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/24 12:54:35 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name)
{
	_name = name;
	if (name.empty())
		_name = "John Doe";
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	_invIndex = 0;
	_storageLen = 0;
	_storage = new AMateria*[_storageLen];
	if (DEBUG)
		std::cout << BLU << "Character Constructor Called" << std::endl;
}

Character::Character(const Character &cpy)
{
	*this = cpy;
	if (DEBUG)
		std::cout << BLU << "Character Constructor Copy Called" << std::endl;
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
		std::cout << BLU << "Character Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < _storageLen; ++i)
		if (_storage[i])
			delete (_storage[i]);
	if (DEBUG)
		std::cout << BLU << "Character Destructor Called" << std::endl;
	delete [] _storage;
}

std::string const	&Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		std::cout << RED << "Cannot Equip NULL AMateria" << RST << std::endl;
	else
	{
		AMateria	**temp = new AMateria*[_storageLen + 1];
		for (int i = 0; i < _storageLen; ++i)
			temp[i] = _storage[i];
		delete [] _storage;
		temp[_storageLen] = m;
		_storage = temp;
		if (_invIndex == 4)
			std::cout << RED << "Your inventory is already full" << RST << std::endl;
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
		std::cout << RED << "You have nothing to unequip" << RST << std::endl;
	else if (idx < 0 || idx >= _invIndex)
		std::cout << RED << "Invalid Index" << RST << std::endl;
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
		std::cout << RED << "You have nothing to use" << RST << std::endl;
	else if (idx < 0 || idx >= _invIndex)
		std::cout << RED << "Invalid Index" << RST << std::endl;
	else
	{
		std::cout << GRN << "* ";
		_inventory[idx]->use(target);
	}
}
