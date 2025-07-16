/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:00:33 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/16 14:37:52 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	FragTrap Chazzup("Chazzup");
	ScavTrap Lorenzo("Lorenzo");

	std::cout << "----- Chazzup -----" << std::endl;
	Chazzup.attack("");
	Chazzup.attack("Stromae");
	Chazzup.attack("Stromae");
	Chazzup.attack("Stromae");
	Chazzup.attack("Stromae");
	Chazzup.attack("Stromae");
	Chazzup.attack("Stromae");
	Chazzup.attack("Stromae");
	Chazzup.attack("Stromae");
	Chazzup.beRepaired(10);
	Chazzup.beRepaired(-10);
	Chazzup.attack("");
	Chazzup.takeDamage(10);
	Chazzup.takeDamage(-10);
	Chazzup.takeDamage(10);
	Chazzup.takeDamage(-10);
	Chazzup.attack("Stromae");
	Chazzup.beRepaired(10);
	Chazzup.beRepaired(-10);
	Chazzup.takeDamage(10);
	Chazzup.takeDamage(1 -10);
	std::cout << "----- Lorenzo -----" << std::endl;
	Lorenzo.attack("");
	Lorenzo.attack("Stromae");
	Lorenzo.attack("Stromae");
	Lorenzo.attack("Stromae");
	Lorenzo.attack("Stromae");
	Lorenzo.attack("Stromae");
	Lorenzo.attack("Stromae");
	Lorenzo.attack("Stromae");
	Lorenzo.attack("Stromae");
	Lorenzo.beRepaired(10);
	Lorenzo.beRepaired(-10);
	Lorenzo.attack("");
	Lorenzo.takeDamage(10);
	Lorenzo.takeDamage(-10);
	Lorenzo.takeDamage(10);
	Lorenzo.takeDamage(-10);
	Lorenzo.attack("Stromae");
	Lorenzo.beRepaired(10);
	Lorenzo.beRepaired(-10);
	Lorenzo.takeDamage(10);
	Lorenzo.takeDamage(1 -10);
}