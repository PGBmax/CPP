/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:50:50 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 12:17:28 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include "AAnimal.hpp"

class Brain
{
	public:
		Brain();
		Brain( const Brain &cpy );
		Brain &operator=( const Brain &cpy );
		~Brain();
	private:
		std::string _ideas[100];
};

#endif