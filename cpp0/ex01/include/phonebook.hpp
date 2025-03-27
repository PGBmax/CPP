/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:06:36 by pboucher          #+#    #+#             */
/*   Updated: 2025/03/26 17:54:53 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class Phonebook
{
	public:
		int getID() const;
		std::string getFN() const;
		std::string getLN() const;
		std::string getNN() const;
		std::string getDA() const;
		std::string getPN() const;
		Phonebook &setID(int id);
		Phonebook &setFN(std::string fn);
		Phonebook &setLN(std::string ln);
		Phonebook &setNN(std::string nn);
		Phonebook &setDA(std::string da);
		Phonebook &setPN(std::string pn);
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _darkest;
		std::string _phonenum;
		int _id;
};

void	add_phonebook(Phonebook *phonebook);

#endif