/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:21:33 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/19 02:30:50 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	public:
		Contact();

		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nick_name();
		std::string	get_phone_number();
		std::string get_darkest_secret();

		Contact	&set_first_name(std::string first_name);
		Contact	&set_last_name(std::string last_name);
		Contact	&set_nick_name(std::string nick_name);
		Contact	&set_phone_number(std::string phone_number);
		Contact	&set_darkest_secret(std::string darkest_secret);
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string _nick_name;
		std::string _phone_number;
		std::string _darkest_secret;
};