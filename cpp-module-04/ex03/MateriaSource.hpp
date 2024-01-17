/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:01:06 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/18 11:55:12 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*memory[4];
	public:
		// constructor
		MateriaSource();
		// copy constructor
		MateriaSource(MateriaSource &copy);
		// copy assignment operator
		MateriaSource	&operator=(MateriaSource &copy);
		// destructor
		~MateriaSource();
		// others
		void			learnMateria(AMateria *mat);
		AMateria		*createMateria(std::string const &type);
};

#endif