/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 23:49:56 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/12 01:26:47 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(const std::string &filename, const std::string &s1, const std::string &s2)
{
	if (filename.empty())
		throw std::logic_error("There is nothing in the filename 🐵");
	if (s1.empty())
		throw std::logic_error("Nah bro the string to search is empty 😔");
	if (s2.empty())
		throw std::logic_error("Blud hasn't even try to write something to replace 💀");
	std::string	filename_replace = filename;
	this->_file.open(filename.c_str(), std::ifstream::in);
	if (this->_file.fail())
		throw std::logic_error("PC just rotting himself 🤯");
	this->_new_file.open(filename_replace.append(".replace").c_str(), std::ofstream::out | std::ofstream::trunc);
	if (this->_new_file.fail())
		throw std::logic_error("PC just rotting himself 🤯");
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
