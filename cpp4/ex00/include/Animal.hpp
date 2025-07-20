/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:20:57 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/18 12:53:31 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal &cpy );
		Animal &operator=( const Animal &cpy );
		virtual ~Animal();

		const std::string &getType() const;
		virtual void makeSound() const;
	protected:
		std::string _type;
};

#endif