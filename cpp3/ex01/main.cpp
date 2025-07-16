/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:00:33 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/16 14:36:12 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap num("");

	num.attack("");
	num.attack("Stromae");
	num.attack("Stromae");
	num.attack("Stromae");
	num.attack("Stromae");
	num.attack("Stromae");
	num.attack("Stromae");
	num.attack("Stromae");
	num.attack("Stromae");
	num.beRepaired(10);
	num.beRepaired(-10);
	num.attack("");
	num.takeDamage(10);
	num.takeDamage(-10);
	num.takeDamage(10);
	num.takeDamage(-10);
	num.attack("Stromae");
	num.beRepaired(10);
	num.beRepaired(-10);
	num.takeDamage(10);
	num.takeDamage(1 -10);
}