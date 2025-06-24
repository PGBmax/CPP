/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:28:58 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/24 11:38:39 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

const std::string	&Contact::getFirstName() const
{
	return (this->_firstName);
}

const std::string	&Contact::getLastName() const
{
	return (this->_lastName);
}

const std::string	&Contact::getNickname() const
{
	return (this->_nickname);
}

const std::string	&Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

const std::string	&Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}

Contact	&Contact::setFirstName(std::string const& firstName)
{
	_firstName = firstName;
	return (*this);
}

Contact	&Contact::setLastName(std::string const& lastName)
{
	_lastName = lastName;
	return (*this);
}

Contact	&Contact::setNickname(std::string const& nickname)
{
	_nickname = nickname;
	return (*this);
}

Contact	&Contact::setPhoneNumber(std::string const& phoneNumber)
{
	_phoneNumber = phoneNumber;
	return (*this);
}

Contact	&Contact::setDarkestSecret(std::string const& darkestSecret)
{
	_darkestSecret = darkestSecret;
	return (*this);
}