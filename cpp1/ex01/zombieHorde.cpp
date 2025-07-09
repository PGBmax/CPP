/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 14:30:45 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/08 16:16:22 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "Nah bro use a positive int instead" << std::endl;
		return (NULL);
	}
	Zombie *new_zomb = new Zombie[N];
	for (int i = 0; i < N; i++)
		new_zomb[i].setName(name);
	return (&new_zomb[0]);
}