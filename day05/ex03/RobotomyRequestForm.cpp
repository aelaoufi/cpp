/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:24:48 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/05 22:16:10 by aelaoufi         ###   ########.fr       */
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
		if (Bureau.getGrade() > 72)
			throw (GradeTooLowException());
		else
			this->sign(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Shruberry Coulnd't Sign " << e.what();
	}
}

void		RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (executor.getGrade() > 45)
			throw (GradeTooLowException());
		else
		{
			std::cout << "*Drilling noises* " << Target << " has been robotomized successfully 50% of the time\n";
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Robotomy Coulnd't execute " << e.what();
	}
}