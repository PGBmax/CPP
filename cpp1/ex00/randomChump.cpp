/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:06:42 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/09 12:00:50 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name )
{
	try
	{
		Zombie	*new_zomb = new Zombie;
		new_zomb->setName(name);
		new_zomb->announce();
		delete new_zomb;
	}
	catch (const std::bad_alloc&e)
	{
		std::cout	<< "Memory Allocation is failed:"
					<< e.what() << std::endl;
	}
}