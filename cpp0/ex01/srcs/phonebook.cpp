/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:48:42 by pboucher          #+#    #+#             */
/*   Updated: 2025/03/26 18:12:50 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/utils.hpp"

void	add_phonebook(Phonebook *phonebook)
{
	std::string first;
	std::string last;
	std::string nick;
	std::string darkest;
	std::string phone;
	PRINT CYN "First Name     » " CLR;
	INPUT first;
	PRINT CYN "Last Name      » " CLR;
	INPUT last;
	PRINT CYN "Nickname       » " CLR;
	INPUT nick;
	PRINT CYN "Darkest Secret » " CLR;
	INPUT darkest;
	PRINT CYN "Phone Number   » " CLR;
	INPUT phone;
	(*phonebook).setFN(first).setLN(last).setNN(nick).setDA(darkest).setPN(phone);
}

int Phonebook::getID() const
{
	return (_id);
}

std::string Phonebook::getFN() const
{
	return (_firstname);
}

std::string Phonebook::getLN() const
{
	return (_lastname);
}

std::string Phonebook::getNN() const
{
	return (_nickname);
}

std::string Phonebook::getDA() const
{
	return (_darkest);
}

std::string Phonebook::getPN() const
{
	return (_phonenum);
}

Phonebook &Phonebook::setID(int id)
{
	_id = id;
	return (*this);
}

Phonebook &Phonebook::setFN(std::string fn)
{
	_firstname = fn;
	return (*this);
}

Phonebook &Phonebook::setLN(std::string ln)
{
	_lastname = ln;
	return (*this);
}

Phonebook &Phonebook::setNN(std::string nn)
{
	_nickname = nn;
	return (*this);
}

Phonebook &Phonebook::setDA(std::string da)
{
	_darkest = da;
	return (*this);
}

Phonebook &Phonebook::setPN(std::string pn)
{
	_phonenum = pn;
	return (*this);
}
