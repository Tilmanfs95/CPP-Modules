/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfriedri <tfriedri@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:37:09 by tfriedri          #+#    #+#             */
/*   Updated: 2023/04/18 15:53:06 by tfriedri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("nothing");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	// deep copy check
	std::cout << std::endl;
	std::cout << std::endl;
	Character	test("hello");
	tmp = src->createMateria("ice");
	test.equip(tmp);
	Character	deep_test = test;
	test.use(0, *bob);
	deep_test.use(0, *bob);
	test.unequip(0);
	delete(tmp);
	test.use(0, *bob);
	deep_test.use(0, *bob);
	
	std::cout << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}