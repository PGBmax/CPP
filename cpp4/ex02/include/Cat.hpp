/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:29:32 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/22 23:47:36 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(const Cat &cpy );
		Cat &operator=( const Cat &cpy );
		~Cat();

		void makeSound() const;
		Brain	*getBrainAddress() const;
	private:
		Brain	*_brain;
};

#endif