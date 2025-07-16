/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 17:03:16 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/16 14:53:55 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap
{
	public:
		FragTrap( const std::string &name );
		FragTrap( const FragTrap &copy );
		FragTrap &operator=( const FragTrap &op );
		~FragTrap();

		void highFivesGuys();
		void attack( const std::string &target );
};

#endif