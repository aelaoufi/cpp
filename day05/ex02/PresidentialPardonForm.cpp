/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:23:18 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/03 22:35:24 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Target(_target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pres)
{
	*this = pres;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &pres)
{
	this->Target = pres.Target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (Target);
}

void	PresidentialPardonForm::beSigned(Bureaucrat &Bureau)
{
	try
	{
		if (Bureau.getGrade() > 25)
			throw (GradeTooLowException());
		else
			this->sign(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Presidential Pardon Coulnd't Sign " << e.what();
	}
}

void		PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (executor.getGrade() > 5)
			throw (GradeTooLowException());
		else
		{
			std::cout << Target << " has been pardoned by Zaphod Beeblebrox\n";
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Presidential Pardon Coulnd't execute " << e.what();
	}
}