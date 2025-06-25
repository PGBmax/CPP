/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:34:53 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/25 02:28:16 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &name)
{
	this->setType(name);
	std::cout << GRN << "Weapon constructor called" << RST << std::endl;
}

Weapon::~Weapon()
{
	std::cout << RED << "Weapon destructor called" << RST << std::endl;
}

const std::string &Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(const std::string &name )
{
	if (name.empty())
		this->_type = "hands";
	else
		this->_type = name;
}