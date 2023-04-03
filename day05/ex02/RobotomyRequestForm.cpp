/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:24:48 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/03 20:26:50 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Target(_target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &Rbt)
{
	*this = Rbt;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &Rbt)
{
	this->Target = Rbt.Target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (Target);
}

void	RobotomyRequestForm::beSigned(Bureaucrat &Bureau)
{
	try
	{
		if (getGradeToSign() > 72 || getGradeToExec() > 45)
			throw (GradeTooLowException());
		else
		{
			
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Robotomy failed" << e.what();
	}
}