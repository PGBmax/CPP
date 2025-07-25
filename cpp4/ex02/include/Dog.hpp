/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:36:12 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/22 23:47:39 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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