/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:07:05 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 00:12:47 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(const std::string &name);
		Character(const Character &cpy);
		virtual Character &operator=(const Character &cpy);
		~Character();

		std::string const 	&getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
	private:
		AMateria	**_storage;
		AMateria	*_inventory[4];
		int			_storageLen;
		int			_invIndex;
		std::string _name;
};


#endif