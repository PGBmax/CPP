/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:28:58 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/19 02:31:37 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	
}

std::string	Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string	Contact::get_nick_name(void)
{
	return (this->_nick_name);
}

std::string	Contact::get_phone_number(void)
{
	return (this->_phone_number);
}

std::string Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}

Contact	&Contact::set_first_name(std::string first_name)
{
	_first_name = first_name;
	return (*this);
}

Contact	&Contact::set_last_name(std::string last_name)
{
	_last_name = last_name;
	return (*this);
}

Contact	&Contact::set_nick_name(std::string nick_name)
{
	_nick_name = nick_name;
	return (*this);
}

Contact	&Contact::set_phone_number(std::string phone_number)
{
	_phone_number = phone_number;
	return (*this);
}

Contact	&Contact::set_darkest_secret(std::string darkest_secret)
{
	_darkest_secret = darkest_secret;
	return (*this);
}