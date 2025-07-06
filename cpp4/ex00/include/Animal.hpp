/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 13:37:03 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/06 14:04:50 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

class Animal
{
	public:
		Animal();
		Animal( const Animal &copy );
		Animal &operator=( const Animal &op );
		~Animal();

		void	makeSound() const;

		std::string	getType() const;
		void		setType( std::string name );
	protected:
		std::string type;
};

class	Dog : public Animal
{
	public:
		Dog();
		Dog( const Dog &copy );
		Dog &operator=( const Dog &op );
		~Dog();
};

class	Cat : public Animal
{
	public:
		Cat();
		Cat( const Cat &copy );
		Cat &operator=( const Cat &op );
		~Cat();
};