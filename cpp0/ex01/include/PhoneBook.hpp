/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 01:20:47 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/24 11:30:16 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void	add();
		void	search();
		void	showPrompt();

	private:
		Contact 	_class[8];
		size_t		_index;
		void		_show();
		void		_contactInfo(int index);
		void		_printInfo(std::string info);
		std::string	_getInput(std::string input);
};

#endif