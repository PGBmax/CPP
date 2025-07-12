/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 23:43:29 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/12 01:25:18 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr	<< RED <<  "Programs needs 3 arguments:" 
					<< std::endl << "<filename> <string1> <string2>" 
					<< RST << std::endl;
		return (1);
	}
	try
	{
		Sed sed(av[1], av[2], av[3]);
		sed.replace();
		std::cout << GRN << av[1] << " copy has been created !" << RST << std::endl;
	}
	catch(std::exception const& error)
	{
		std::cerr << RED << error.what() << RST << std::endl;
	}
}
