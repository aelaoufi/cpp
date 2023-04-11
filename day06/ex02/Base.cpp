/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:22:01 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/10 20:25:39 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*genarate(void)
{
	srand(time(NULL));
	int r = rand() % 3;
	switch (r)
	{
		case 0:
		{
			A *a = new A;
			return (a);
		}
		case 1:
		{
			B *b = new B;
			return (b);
		}
	}
	C *c = new C;
	return (c);
}

void	identify(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	if (a != NULL)
		std::cout << "the type of (pushin) p is A\n";
	B *b = dynamic_cast<B*>(p);
	if (b != NULL)
		std::cout << "the type of (pushin) p is B\n";
	C *c = dynamic_cast<C*>(p);
	if (c != NULL)
		std::cout << "the type of (pushin) p is C\n";
	if (!a && !b && !c)
		std::cout << "No type found\n";
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "the type of (pushin) p is A\n";
		(void)a;
	}
	catch (const std::bad_cast &e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			std::cout << "the type of (pushin) p is B\n";
			(void)b;
		}
		catch (const std::bad_cast &e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				std::cout << "the type of (pushin) p is C\n";
				(void)c;
			}
			catch (const std::bad_cast &e)
			{
				std::cout << "No type found\n";
			}
		}
	}
}
