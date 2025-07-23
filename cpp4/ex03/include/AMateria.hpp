/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 23:50:51 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 14:11:22 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

#ifndef DEBUG
# define DEBUG 0
#endif

#define RST "\e[0m"
#define RED "\e[1;31m"
#define GRN "\e[1;32m"
#define YEL "\e[1;33m"
#define BLU "\e[1;34m"
#define MAG "\e[1;35m"
#define CYN "\e[1;36m"
#define WHT "\e[1;37m"

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria( std::string const &type );
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