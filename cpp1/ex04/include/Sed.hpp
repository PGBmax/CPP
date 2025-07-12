/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 23:50:16 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/25 02:38:27 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SED_HPP
# define SED_HPP

#include <iostream>
#include <fstream>
#include <stdexcept>

#define RST "\e[0m"
#define RED "\e[1;31m"
#define GRN "\e[1;32m"
#define YEL "\e[1;33m"
#define BLU "\e[1;34m"
#define MAG "\e[1;35m"
#define CYN "\e[1;36m"
#define WHT "\e[1;37m"

class Sed
{
	public:
		Sed(const std::string &filename, const std::string &s1, const std::string &s2);
		~Sed();

		void replace();
	private:
		std::ifstream	_file;
		std::ofstream	_new_file;
		std::string		_s1;
		std::string		_s2;
		std::string		_buffer;

};

#endif
