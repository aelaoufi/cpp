/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 21:01:32 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/03/25 00:34:12 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Dog *doggy = new Dog("3zizi");
	Cat *basbosi = new Cat("kamal");
	
	doggy->makeSound();
	basbosi->makeSound();
	std::cout << doggy->getType() << std::endl;
	std::cout << basbosi->getType() << std::endl;

	doggy->printIdeas();
	basbosi->printIdeas();
	
	delete doggy;
	delete basbosi;
}
