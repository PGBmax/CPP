/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 13:54:31 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 13:27:07 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	if (DEBUG)
		std::cout << BLU << "[Brain]		Constructor Called" << RST << std::endl;
}

Brain::Brain( const Brain &copy )
{
	*this = copy;
	if (DEBUG)
		std::cout << BLU << "[Brain]		Constructor Copy Called" << RST << std::endl;
}

Brain	&Brain::operator=( const Brain &copy )
{
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = copy._ideas[i];
	if (DEBUG)
		std::cout << BLU << "[Brain]		Constructor Copy Assignment Called" << RST << std::endl;
	return (*this);
}

Brain::~Brain()
{
	if (DEBUG)
		std::cout << BLU << "[Brain]		Destructor Called" << RST << std::endl;
}