/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:06:36 by pboucher          #+#    #+#             */
/*   Updated: 2025/03/20 17:28:57 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

# define RESET   "\1\033[0m\2"
# define RED     "\1\033[31m\2"
# define GREEN   "\1\033[32m\2"
# define YELLOW  "\1\033[33m\2"
# define BLUE    "\1\033[34m\2"
# define MAGENTA "\1\033[35m\2"
# define CYAN    "\1\033[36m\2"
# define WHITE   "\1\033[37m\2"

class Phonebook
{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	private:
		int id;
};

#endif