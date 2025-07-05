/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 11:13:22 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/04 17:09:52 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap( const std::string &name );
		ScavTrap( const ScavTrap &copy );
		ScavTrap &operator=( const ScavTrap &op );
		~ScavTrap();

		void guardGate();
		void attack( const std::string &target );
};