/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:23:11 by pboucher          #+#    #+#             */
/*   Updated: 2025/03/27 13:51:41 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "phonebook.hpp"
#include <iostream>

class Contact
{
	public:
		int getID() const;
		std::string getFN() const;
		std::string getLN() const;
		std::string getNN() const;
		std::string getDA() const;
		std::string getPN() const;
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _darkest;
		std::string _phonenumber;
};

void	contact(Phonebook *phone);

#endif