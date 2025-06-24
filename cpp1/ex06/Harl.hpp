/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 02:55:29 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/24 18:10:02 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();

		void	complain( std::string level );
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();

		std::string _level[4];
};