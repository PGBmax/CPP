/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:21:33 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/24 11:38:39 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		std::string	const& getFirstName() const;
		std::string	const& getLastName() const;
		std::string	const& getNickname() const;
		std::string	const& getPhoneNumber() const;
		std::string	const& getDarkestSecret() const;

		Contact	&setFirstName(std::string const& firstName);
		Contact	&setLastName(std::string const& lastName);
		Contact	&setNickname(std::string const& nickname);
		Contact	&setPhoneNumber(std::string const& phoneNumber);
		Contact	&setDarkestSecret(std::string const& darkestSecret);
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

#endif