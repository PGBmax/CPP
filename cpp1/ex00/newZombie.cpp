/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:06:30 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/09 11:45:46 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	try
	{
		Zombie	*new_zomb = new Zombie;
		new_zomb->setName( name );
		return (new_zomb);
	}
	catch (const std::bad_alloc&e)
	{
		std::cout	<< "Memory Allocation is failed:"
					<< e.what() << std::endl;
	}
	return (NULL);
}