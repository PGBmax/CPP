/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:29:32 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/24 10:58:21 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("goofy aah zombie")
{
	std::cout << "New Zombie created" << std::endl;
}

Zombie::~Zombie()
{
	if (_name.empty())
	{
		std::cout << "Zombie just got deleted 😔" << std::endl;
		return ;
	}
	std::cout << "Zombie " << _name << " just got deleted 😔" << std::endl;
}

void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	if (!name.empty())
		this->_name = name;
}