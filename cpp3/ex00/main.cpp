/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 03:00:33 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/17 15:47:33 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap yogurt("Yogurt");
	ClapTrap cpy( yogurt );
	ClapTrap cpy2("");

	cpy2 = cpy;

	yogurt.attack("");
	yogurt.attack("Stromae");
	yogurt.attack("Stromae");
	yogurt.attack("Stromae");
	yogurt.attack("Stromae");
	yogurt.attack("Stromae");
	yogurt.attack("Stromae");
	yogurt.attack("Stromae");
	yogurt.attack("Stromae");
	yogurt.beRepaired(10);
	yogurt.beRepaired(-10);
	yogurt.attack("");
	yogurt.takeDamage(10);
	yogurt.takeDamage(-10);
	yogurt.takeDamage(10);
	yogurt.takeDamage(-10);
	yogurt.attack("Stromae");
	yogurt.beRepaired(10);
	yogurt.beRepaired(-10);
	yogurt.takeDamage(10);
	yogurt.takeDamage(1 -10);
	cpy.attack("");
	cpy.attack("Stromae");
	cpy.attack("Stromae");
	cpy.attack("Stromae");
	cpy.attack("Stromae");
	cpy.attack("Stromae");
	cpy.attack("Stromae");
	cpy.attack("Stromae");
	cpy.attack("Stromae");
	cpy.beRepaired(10);
	cpy.beRepaired(-10);
	cpy.attack("");
	cpy.takeDamage(10);
	cpy.takeDamage(-10);
	cpy.takeDamage(10);
	cpy.takeDamage(-10);
	cpy.attack("Stromae");
	cpy.beRepaired(10);
	cpy.beRepaired(-10);
	cpy.takeDamage(10);
	cpy.takeDamage(1 -10);

	cpy2.attack("");
	cpy2.attack("Stromae");
	cpy2.attack("Stromae");
	cpy2.attack("Stromae");
	cpy2.attack("Stromae");
	cpy2.attack("Stromae");
	cpy2.attack("Stromae");
	cpy2.attack("Stromae");
	cpy2.attack("Stromae");
	cpy2.beRepaired(10);
	cpy2.beRepaired(-10);
	cpy2.attack("");
	cpy2.attack("Stromae");
	cpy2.beRepaired(10);
	cpy2.beRepaired(-10);
	cpy2.takeDamage(10);
}