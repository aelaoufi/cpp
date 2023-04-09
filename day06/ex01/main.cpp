/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:25:56 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/09 20:17:27 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Serialize test;
	t_data *tata = new t_data;
	uintptr_t ptr = 1;
	t_data *desirialize;
	
	tata->charbohdo = 'n';
	tata->intbohdo = 4;
	tata->doublebohdo = 2.5;
	
	ptr = test.serialize(tata);
	std::cout << ptr << " <- uintptr value after serializing data\n";
	desirialize = test.deserialize(ptr);
	std::cout << desirialize->charbohdo << " " << desirialize->doublebohdo << " " << desirialize->intbohdo << " <- Data values after deserializing uintptr\n";
	delete tata;
}