/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboucher <pboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 00:33:31 by pboucher          #+#    #+#             */
/*   Updated: 2025/07/23 00:35:16 by pboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		MateriaSource	&operator=(const MateriaSource &cpy);
		~MateriaSource();

		void learnMateria(AMateria *materia);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria	*_templates[4];
		AMateria	**_storage;
		int			_storageLen;
};

#endif