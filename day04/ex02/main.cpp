/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 21:01:32 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/03/19 16:13:04 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Dog *doggy = new Dog("simo");
	Cat *basbosi = new Cat("kamal");
	//Animal *animal = new Animal("cant instantiate animal coz its abstract");
	
	doggy->makeSound();
	basbosi->makeSound();
	std::cout << doggy->getType() << std::endl;
	std::cout << basbosi->getType() << std::endl;
	
	basbosi->printIdeas();
	doggy->printIdeas();
	
	
	delete doggy;
	delete basbosi;
}
