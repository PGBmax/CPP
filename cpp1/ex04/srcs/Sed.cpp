/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 23:49:56 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/24 02:49:33 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(const std::string &filename, const std::string &s1, const std::string &s2)
{
	if (filename.empty())
		throw (std::string("There is nothing in the filename :rio_de_janeiro:"));
	if (s1.empty())
		throw (std::string("Nah bro the string to search is empty :pensive:"));
	if (s2.empty())
		throw (std::string("Blud hasn't even try to write something to replace :skull:"));
	std::string	filename_replace = filename;
	this->_file.open(filename.c_str(), std::ifstream::in);
	if (!this->_file.fail())
		this->_new_file.open(filename_replace.append(".replace").c_str(), std::ofstream::out | std::ofstream::trunc);
	if (this->_file.fail() || this->_new_file.fail())
		throw (std::string("PC just rotting himself :wtf:"));
	this->_s1 = s1;
	this->_s2 = s2;
}

Sed::~Sed()
{
	if (this->_file.is_open())
		this->_file.close();
	if (this->_new_file.is_open())
		this->_new_file.close();
}


void	Sed::replace()
{
	size_t index;
	while (getline(this->_file, this->_buffer))
	{
		index = 0;
		for (index = this->_buffer.find(this->_s1, index); index != std::string::npos; index = this->_buffer.find(this->_s1, index))
		{
			this->_buffer.erase(index, this->_s1.length());
			this->_buffer.insert(index, this->_s2);
			index += this->_s2.length();
		}
		this->_new_file << this->_buffer << std::endl;
	}
}
