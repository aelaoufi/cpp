/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:40:16 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/23 21:09:09 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() 
{
	IMateriaSource	*src = new MateriaSource();
	ICharacter		*me = new Character("me");
	AMateria		*tmp;
	ICharacter		*bob = new Character("bob");

	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	tmp = src->createMateria("ice");
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return (0);
}