/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:20:57 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/22 14:15:34 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

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