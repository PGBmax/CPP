/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:28:03 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/20 17:38:16 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		
		void	announce();
		void	set_name(std::string name);
	private:
		std::string	_name;
};

Zombie	*zombieHorde( int N, std::string name );
