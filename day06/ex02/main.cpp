/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:24:30 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/10 20:24:35 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


int main()
{
	Base *bb;

	bb = genarate();
	identify(bb);

	Base &bb2 = *bb;
	identify(bb2);
	
	Base *b = new Base;
	identify(b);

	Base &b2 = *b;
	identify(b2);
	return (0);
}