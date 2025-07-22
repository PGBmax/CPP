/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:20:36 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 00:41:02 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure &cpy);
		Cure	&operator=(const Cure &cpy);
		~Cure();

		std::string const	&getType() const;
		AMateria			*clone() const;
		void				use(ICharacter& target);
};

#endif