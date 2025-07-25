/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:06:30 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/12 01:15:42 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie	*new_zomb = new(std::nothrow) Zombie;
	if (!new_zomb)
	{
		std::cerr << RED << "newZombie() : Allocation Error" << RST << std::endl;
		return (NULL);
	}
	new_zomb->setName( name );
	return (new_zomb);
}