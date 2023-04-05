/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 19:55:01 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/05 20:26:00 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	
}

Intern::Intern(const Intern &_intern)
{
	*this = _intern;
}

Intern &Intern::operator=(const Intern &_intern)
{
	(void)_intern;
	return (*this);
}

Intern::~Intern()
{
	
}

AForm	*Intern::makeForm(std::string Form, std::string Target)
{
	int i = 0;
	
	std::string msg[3] = {"robotomy request", "presidential pardon form", "shrubbery creation form"};
	for (i = 0; i < 3; i++)
	{
		if (Form.compare(msg[i]) == 0)
			break;
	}
	switch (i)
	{
		case 0:
		{
			AForm *rbt = new RobotomyRequestForm(Target);
			std::cout << "Intern Creates " << Form << "\n";
			return (rbt);
		}
		case 1:
		{
			AForm *president = new PresidentialPardonForm(Target);
			std::cout << "Intern Creates " << Form << "\n";
			return (president);
		}
		case 2 :
		{
			AForm *shru = new ShrubberyCreationForm(Target);
			std::cout << "Intern Creates " << Form << "\n";
			return (shru);
		}
		default:
			std::cerr << "Form doesn't exist\n";
	}
	return (NULL);
}