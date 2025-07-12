/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:06:42 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/12 11:42:38 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie	*new_zomb = new(std::nothrow) Zombie;
	if (!new_zomb)
	{
		std::cerr << RED << "randomChump() : Allocation Error" << RST << std::endl;
		return ;
	}
	new_zomb->setName(name);
	new_zomb->announce();
	delete new_zomb;
}