/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:24:05 by pboucher          #+#    #+#             */
/*   Updated: 2025/03/26 19:22:20 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/utils.hpp"

void	print_contact(std::string string)
{
	int i = 0;
	for (int j = 0; string[j]; j++)
		i = j;
	if (i == 10)
	{
		for(int j = 0; j < 9; j++)
			PRINT string[j];
		PRINT ".";
	}
	else
	{
		for (int j = 9; j > i; j--)
			PRINT " ";
		for (int j = 0; string[j]; j++)
			PRINT string[j];
	}
	PRINT "┃";
}

void	contact(Phonebook *phone)
{
	int	input;

	PRINT RGB(150, 150, 150);
	PRINT "┏━━━━━━━━━━┳━━━━━━━━━━┳━━━━━━━━━━┳━━━━━━━━━━┓" ENDL;
	PRINT "┃    ID    ┃First Name┃Last  Name┃ Nickname ┃" ENDL;
	PRINT "┣━━━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━━╋━━━━━━━━━━┫" ENDL;
	for (int i = 0; i < 8; i++)
	{
		PRINT "┃         " AND phone[i].getID() AND "┃";
		print_contact((std::string){phone[i].getFN()});
		print_contact(phone[i].getLN());
		print_contact(phone[i].getNN());
		PRINT "" ENDL;
	}
	PRINT "┗━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┻━━━━━━━━━━┛" ENDL;
	NEWL;
	PRINT RGB(255, 0, 0) "Enter ID of your choice : " CLR;
	INPUT input;
	PRINT RGB(0, 150, 250);
	PRINT "[First Name]    : " AND phone[input].getFN() ENDL;
	PRINT "[Last Name]     : " AND phone[input].getLN() ENDL;
	PRINT "[Nickname]      : " AND phone[input].getNN() ENDL;
	PRINT "[Darkest Secret]: " AND phone[input].getDA() ENDL;
	PRINT "[Phone Nummber] : " AND phone[input].getPN() ENDL;
	PRINT CLR;
}
