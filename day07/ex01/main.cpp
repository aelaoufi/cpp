/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 00:27:23 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/12 20:08:45 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

void increment(int &i)
{
	i = i + 1;
}

void my_toupper(char &c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
}

int main()
{
	int s[5] = {1, 2, 3, 4};
	
	iter(s, 4, increment);
	std::cout << "s1 : " << s[0] << "\ns2 : " << s[1] << "\ns3 : " << s[2] << "\ns4 : " << s[3] << "\n";

	char *str = strdup("anass");
	iter(str, 5, my_toupper);
	std::cout << "str after iter : " << str << "\n";
	return (0);
}