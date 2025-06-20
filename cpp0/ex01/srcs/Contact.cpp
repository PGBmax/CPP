/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:28:58 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/19 10:51:41 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

const std::string	&Contact::get_first_name() const
{
	return (this->_first_name);
}

const std::string	&Contact::get_last_name() const
{
	return (this->_last_name);
}

const std::string	&Contact::get_nick_name() const
{
	return (this->_nick_name);
}

const std::string	&Contact::get_phone_number() const
{
	return (this->_phone_number);
}

const std::string	&Contact::get_darkest_secret() const
{
	return (this->_darkest_secret);
}

Contact	&Contact::set_first_name(std::string const& first_name)
{
	_first_name = first_name;
	return (*this);
}

Contact	&Contact::set_last_name(std::string const& last_name)
{
	_last_name = last_name;
	return (*this);
}

Contact	&Contact::set_nick_name(std::string const& nick_name)
{
	_nick_name = nick_name;
	return (*this);
}

Contact	&Contact::set_phone_number(std::string const& phone_number)
{
	_phone_number = phone_number;
	return (*this);
}

Contact	&Contact::set_darkest_secret(std::string const& darkest_secret)
{
	_darkest_secret = darkest_secret;
	return (*this);
}