/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:53:24 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/19 16:42:37 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for(int i = 1; i < ac; i++)
	{
		std::string str = av[i];
		for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
			std::cout << (char)std::toupper(*it);
	}
	std::cout << std::endl;
}