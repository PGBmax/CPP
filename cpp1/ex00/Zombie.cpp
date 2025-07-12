/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:29:32 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/12 01:07:50 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("goofy aah zombie")
{
	std::cout << GRN << "New Zombie created" << RST << std::endl;
}

Zombie::~Zombie()
{
	std::cout << RED << "Zombie " << _name << " just got deleted" << RST << std::endl;
}

void	Zombie::announce()
{
	std::cout << BLU << _name << ": BraiiiiiiinnnzzzZ..." << RST << std::endl;
}

void	Zombie::setName(std::string name)
{
	if (!name.empty())
		this->_name = name;
}