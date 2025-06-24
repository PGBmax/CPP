/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:26:11 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/24 11:07:00 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int num = 0;
	Zombie *zomboss = zombieHorde( num, "");
	for (int i = 0; i < num; i++)
		zomboss[i].announce();
	delete [] zomboss;
}