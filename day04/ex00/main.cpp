/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:00:58 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/24 21:56:11 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog("black");
	const Animal* i = new Cat("CAT");
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal *WA = new WrongAnimal();
	const WrongAnimal *WC = new WrongCat();
	WrongCat *WWC = new WrongCat();

	WA->makeSound();
	WC->makeSound();
	WWC->makeSound();
	
	delete meta;
	delete i;
	delete j;
	return (0);
}