/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:57:26 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/05 16:00:32 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: virtual public FragTrap, virtual public ScavTrap
{
	public:
		DiamondTrap( const std::string &name );
		DiamondTrap( const DiamondTrap &copy );
		DiamondTrap &operator=( const DiamondTrap &op );
		~DiamondTrap();
	private:
		std::string _name;
};

#endif