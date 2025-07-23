/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:20:57 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 12:14:26 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include "Animal.hpp"

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &cpy );
		WrongAnimal &operator=( const WrongAnimal &cpy );
		~WrongAnimal();

		const std::string &getType() const;
		void makeSound() const;
	protected:
		std::string _type;
};

#endif