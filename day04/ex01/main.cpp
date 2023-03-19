/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 21:01:32 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/03/19 16:09:26 by anass_elaou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *animals = new Animal[10];
	for (int i = 0; i < 5; i++)
		animals[i] = Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = Cat();
	delete[] animals;
	while (1);
}
