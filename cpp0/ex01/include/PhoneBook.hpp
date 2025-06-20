/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:20:47 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/19 15:35:04 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void	add();
		void	search();
		void	show_prompt();

	private:
		Contact 	_class[8];
		size_t		_index;
		void		_show();
		void		_contact_info(int index);
		void		_print_info(std::string info);
		std::string	_get_input(std::string input);
};

#endif