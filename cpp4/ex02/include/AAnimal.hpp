/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:20:57 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 14:03:29 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

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

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal &cpy );
		AAnimal &operator=( const AAnimal &cpy );
		virtual ~AAnimal();

		const std::string &getType() const;
		virtual void makeSound() const = 0;
	protected:
		std::string _type;
};

#endif