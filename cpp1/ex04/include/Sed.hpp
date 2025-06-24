/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 23:50:16 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/24 02:44:07 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SED_HPP
# define SED_HPP

#include <iostream>
#include <string>
#include <fstream>

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