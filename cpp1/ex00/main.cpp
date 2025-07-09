/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:26:11 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/09 12:01:05 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *zomboss = newZombie( "Philippe" );
	if (!zomboss)
		return (0);
	zomboss->announce();
	randomChump( "" );
	delete zomboss;	
}