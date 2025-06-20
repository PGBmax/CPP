/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:28:03 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/20 14:07:17 by pboucher         ###   ########.fr       */
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

void	randomChump( std::string name );
Zombie	*newZombie( std::string name );