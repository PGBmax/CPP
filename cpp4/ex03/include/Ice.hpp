/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:20:36 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 00:41:01 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &cpy);
		Ice	&operator=(const Ice &cpy);
		~Ice();

		std::string const	&getType() const;
		AMateria			*clone() const;
		void				use(ICharacter& target);
};

#endif