/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:27:11 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/05 22:14:43 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{	
		Bureaucrat simo("simo", 50);
		AForm	*rrf;
		Intern  someRandomIntern;
		rrf = someRandomIntern.makeForm("shrubery creation form", "simo");
		rrf->beSigned(simo);
		rrf->execute(simo);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
		Bureaucrat tamo("tamo", 120);
		Bureaucrat bimo("bimo", 20);
		AForm	*ta;
		AForm	*bi;
		Intern  someRandomIntern;
		
		ta = someRandomIntern.makeForm("presidential pardon form", "tamo");
		bi = someRandomIntern.makeForm("robotomy request form", "bimo");
		ta->beSigned(tamo);
		ta->execute(tamo);
		bi->beSigned(bimo);
		bi->execute(bimo);
}