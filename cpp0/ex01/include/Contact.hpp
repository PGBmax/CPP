/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:21:33 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/19 10:55:53 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	public:
		std::string	const& get_first_name() const;
		std::string	const& get_last_name() const;
		std::string	const& get_nick_name() const;
		std::string	const& get_phone_number() const;
		std::string	const& get_darkest_secret() const;

		Contact	&set_first_name(std::string const& first_name);
		Contact	&set_last_name(std::string const& last_name);
		Contact	&set_nick_name(std::string const& nick_name);
		Contact	&set_phone_number(std::string const& phone_number);
		Contact	&set_darkest_secret(std::string const& darkest_secret);
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string _nick_name;
		std::string _phone_number;
		std::string _darkest_secret;
};