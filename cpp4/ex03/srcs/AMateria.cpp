/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:03:38 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 14:14:55 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	_type = "";
	if (DEBUG)
		std::cout << BLU << "AMateria Constructor Called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
	if (DEBUG)
		std::cout << BLU << "AMateria Constructor Called" << std::endl;
}

AMateria::AMateria(const AMateria &cpy)
{
	*this = cpy;
	if (DEBUG)
		std::cout << BLU << "AMateria Constructor Copy Called" << std::endl;
}

AMateria	&AMateria::operator =(const AMateria &cpy)
{
	_type = cpy.getType();
	if (DEBUG)
		std::cout << BLU << "AMateria Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

AMateria::~AMateria()
{
	if (DEBUG)
		std::cout << BLU << "AMateria Destructor Called" << std::endl;
}

std::string const	&AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "use a goofy aaaah tricks on " << target.getName() << RST << std::endl;
}
