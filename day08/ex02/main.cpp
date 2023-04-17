/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:41:16 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/17 01:13:24 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main()
{
	std::stack< int, std::vector<int> > stk;
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(8);
	stk.push(100);
	std::vector<int>::iterator it;
	return (0);
}