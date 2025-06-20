/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:00:13 by pboucher          #+#    #+#             */
/*   Updated: 2025/06/20 16:20:23 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	var = "HI THIS IS BRAIN";
	std::string	*ptr = &var;
	std::string	&ref = var;

	std::cout	<< &var	<< std::endl
				<< ptr	<< std::endl
				<< &ref	<< std::endl
				<< std::endl << std::endl;
	
	std::cout	<< var	<< std::endl
				<< *ptr	<< std::endl
				<< ref	<< std::endl
				<< std::endl << std::endl;
	
	var = "HI THIS IS BRAINROT";

	std::cout	<< &var	<< std::endl
				<< ptr	<< std::endl
				<< &ref	<< std::endl
				<< std::endl << std::endl;
	
	std::cout	<< var	<< std::endl
				<< *ptr	<< std::endl
				<< ref	<< std::endl;
}