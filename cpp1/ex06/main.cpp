/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 02:54:28 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/12 01:30:28 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << RED << "Nah bro it's only 1 argument please 💀" << RST <<std::endl;
		return (0);
	}
	std::string level = av[1];
	Harl	harl;
	harl.complain(level);
}