/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:35:37 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/24 12:56:50 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		_templates[i] = NULL;
	_storageLen = 0;
	_storage = new AMateria*[_storageLen];
	if (DEBUG)
		std::cout << BLU << "MateriaSource Constructor Called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	*this = cpy;
	if (DEBUG)
		std::cout << BLU << "MateriaSource Constructor Copy Called" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &cpy)
{
	for (int i = 0; i < _storageLen; ++i)
		if (_storage[i])
			delete _storage[i];
	delete [] _storage;
	_storage = new AMateria*[4];
	for (int i = 0; i < 4; ++i)
	{
		if (_templates[i])
			delete _templates[i];
		if (cpy._templates[i])
			_storage[i] = cpy._templates[i]->clone();
		else
			_storage[i] = NULL;
		_templates[i] = _storage[i];
	}
	for (_storageLen = 0; _storageLen < 4 && _storage[_storageLen]; ++_storageLen)
		;
	if (DEBUG)
		std::cout << BLU << "MateriaSource Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _storageLen; ++i)
		if (_storage[i])
			delete _storage[i];
	delete [] _storage;
	if (DEBUG)
		std::cout << BLU << "MateriaSource Destructor Called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	int	i;
	for (i = 0; i < 4 && _templates[i]; ++i)
		;
	if (!materia)
		std::cout << RED << "Cannot Work with NULL AMateria" << RST << std::endl;
	else
	{
		AMateria	**temp = new AMateria*[_storageLen + 1];
		for (int i = 0; i < _storageLen; ++i)
			temp[i] = _storage[i];
		delete [] _storage;
		temp[_storageLen] = materia;
		_storage = temp;
		if (i == 4)
			std::cout << RED << "There is already 4 templates" << RST << std::endl;
		else
			_templates[i] = temp[_storageLen];
		_storageLen ++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4 && _templates[i]; ++i)
		if (_templates[i]->getType() == type)
			return (_templates[i]->clone());
	std::cout << RED << "Nah bro what da hell type: " << type << " is not valid!" << RST << std::endl;
	return 0;
}
