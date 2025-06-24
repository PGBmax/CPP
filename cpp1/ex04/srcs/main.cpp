/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 23:43:29 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/24 18:21:40 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Programs needs 3 arguments:\n<filename> <string1> <string2>" << std::endl;
		return (1);
	}
	try
	{
		Sed sed(av[1], av[2], av[3]);
		sed.replace();
		std::cout << av[1] << " copy has been created !" << std::endl;
	}
	catch(std::exception const& error)
	{
		
		std::cout << error.what() << std::endl;
	}
}
