/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 21:01:32 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/03/25 00:31:55 by aelaoufi         ###   ########.fr       */
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
}
