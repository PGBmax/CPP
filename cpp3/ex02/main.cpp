/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:00:33 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/04 17:17:40 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	Gurt("Gurt");
	FragTrap	Yo("Yo");

	Gurt.showStats();
	Yo.showStats();

	Gurt.guardGate();
	Yo.highFivesGuys();

	Gurt.attack("");
	Yo.attack("");

	Gurt.showStats();
	Yo.showStats();
}