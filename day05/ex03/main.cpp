/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:27:11 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/05 20:29:06 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat simo("SIMO", 50);
	Intern  someRandomIntern;
    AForm*   rrf;
	
    rrf = someRandomIntern.makeForm("shrubbery creation form", "simo");
	rrf->beSigned(simo);
	rrf->execute(simo);
}