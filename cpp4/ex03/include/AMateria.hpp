/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 23:50:51 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 12:08:35 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

#ifndef DEBUG
# define DEBUG 0
#endif

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria( std::string const & type );
		AMateria(const AMateria &cpy);
		AMateria	&operator =(const AMateria &cpy);
		virtual ~AMateria();

		std::string const & getType() const;
		
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);
	protected:
		std::string _type;
};

#endif