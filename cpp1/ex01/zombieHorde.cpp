/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:30:45 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/12 01:16:02 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << RED << "Nah bro use a positive int instead" << RST <<std::endl;
		return (NULL);
	}
	if (N == 1)
	{
		std::cout << RED << "Bro if you want 1 zombie don't use this func" << RST << std::endl;
		return (NULL);
	}
	Zombie *new_zomb = new(std::nothrow) Zombie[N];
	if (!new_zomb)
	{
		std::cerr << RED << "zombieHorde() : Allocation Error" << RST << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		new_zomb[i].setName(name);
	return (&new_zomb[0]);
}