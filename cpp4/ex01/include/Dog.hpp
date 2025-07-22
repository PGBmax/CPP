/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:36:12 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/22 14:11:30 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &cpy );
		Dog &operator=( const Dog &cpy );
		~Dog();

		void makeSound() const;
		Brain	*getBrainAddress() const;
	private:
		Brain	*_brain;
};

#endif