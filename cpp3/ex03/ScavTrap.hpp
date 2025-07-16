/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 11:13:22 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/16 14:53:50 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

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

#endif