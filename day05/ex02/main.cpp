/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:27:11 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/06 00:09:49 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat smaklo("sma9lo", 111);
	Bureaucrat obama("obama", 11);
	Bureaucrat trump("trump", 5);
	Bureaucrat ma9arich("kasol", 0);
	
	ShrubberyCreationForm arbre("arbre");
	RobotomyRequestForm oba("obama");
	PresidentialPardonForm trum("trump");
	arbre.beSigned(smaklo);
	arbre.execute(smaklo);
	oba.beSigned(obama);
	oba.execute(obama);
	trum.beSigned(trump);
	trum.execute(trump);
}