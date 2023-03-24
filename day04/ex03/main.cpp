/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:40:16 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/24 18:27:04 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() 
{
	IMateriaSource	*src = new MateriaSource();
	Character	self("self");
	ICharacter		*me = new Character("me");
	AMateria		*tmp;
	ICharacter		*bob = new Character("bob");

	Character	you = self;
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	tmp = src->createMateria("ice");
	me->equip(tmp);
	self.equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	self.equip(tmp);
	delete tmp;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(3, *bob);
	tmp = src->createMateria("test");
	me->equip(tmp);
	me->unequip(0);
	me->use(1, *bob);
	me->use(0, *bob);
	you.use(0, *me);
	you.use(1, *me);

	delete bob;
	delete me;
	delete src;
	delete tmp;
	system("leaks AMateria");
	return (0);
}