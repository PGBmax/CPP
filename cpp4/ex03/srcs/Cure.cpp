/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:24:03 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 14:13:54 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	_type = "cure";
	if (DEBUG)
		std::cout << BLU << "Cure Constructor Called" << std::endl;
}

Cure::Cure(const Cure &cpy)
{
	*this = cpy;
	if (DEBUG)
		std::cout << BLU << "Cure Constructor Copy Called" << std::endl;
}

Cure	&Cure::operator=(const Cure &cpy)
{
	_type = cpy.getType();
	if (DEBUG)
		std::cout << BLU << "Cure Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

Cure::~Cure()
{
	if (DEBUG)
		std::cout << BLU << "Cure Destructor Called" << std::endl;
}

std::string const	&Cure::getType() const
{
	return (_type);
}

AMateria	*Cure::clone() const
{
	AMateria	*CureClone = new Cure();
	return (CureClone);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "heals " << target.getName() << "'s wounds *" << RST << std::endl;
}