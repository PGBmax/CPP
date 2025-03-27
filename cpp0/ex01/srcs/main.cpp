/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:18:31 by pboucher          #+#    #+#             */
/*   Updated: 2025/03/26 18:12:43 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/utils.hpp"

int main(void)
{
	Phonebook phone[8];
	
	std::string input;
	for (int i = 0; i < 8; i++)
		phone[i].setID(i).setFN(" ").setLN(" ").setNN(" ").setDA(" ").setPN(" ");
	int	i = 0;
	PRINT RGB(255, 204, 102) "Welcome to the phonebook 🥰" ENDL;
	while (1)
	{
		PRINT GRN "[Phonebook] » " CLR;
		INPUT input;
		if (input == "SEARCH")
			contact(phone);
		if (input == "ADD")
		{
			add_phonebook(&phone[i]);
			i++;
			if (i == 8)
				i = 0;
		}
		else if (input == "EXIT")
		{
			PRINT PRP "Bye bye from the phonebook 🥰" CLR ENDL;
			return (0);
		}
		else
			PRINT RED "";
	}
}
