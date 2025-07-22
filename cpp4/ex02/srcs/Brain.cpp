/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:54:31 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/22 13:56:20 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Constructor Called" << std::endl;
}

Brain::Brain( const Brain &copy )
{
	*this = copy;
	std::cout << "[Brain] Constructor Copy Called" << std::endl;
}

Brain	&Brain::operator=( const Brain &copy )
{
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = copy._ideas[i];
	std::cout << "[Brain] Constructor Copy Assignment Called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor Called" << std::endl;
}