/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:23:42 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/29 21:50:52 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureacrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string _Name, int _Grade) : Name(_Name)
{
	try
	{
		if (_Grade < 1)
		{
			Grade = 0;
			throw (Bureaucrat::GradeTooHighException());
		}
		if (_Grade > 150)
		{
			Grade = 0;
			throw (Bureaucrat::GradeTooLowException());
		}
		Grade = _Grade;
	}
	catch (const std::exception &exp)
	{
		std::cerr << "Exception caught : " << exp.what(); 
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &Bureau)
{
	*this = Bureau; 
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &Bureau)
{
	this->Grade = Bureau.Grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	
}

std::string	Bureaucrat::getName(void) const
{
	return (Name);
}

int	Bureaucrat::getGrade(void) const
{
	return (Grade);
}

void Bureaucrat::IncrmntGrade(void)
{
	try
	{
		if (Grade - 1 < 1)
			throw (Bureaucrat::GradeTooHighException());
		Grade--;
	}
	catch (const std::exception &exp)
	{
		std::cerr << "Exception caught : " << exp.what(); 
	}
}

void Bureaucrat::DcrmntGrade(void)
{
	try
	{
		if (Grade + 1 > 150)
			throw (Bureaucrat::GradeTooLowException());
		Grade++;
	}
	catch(const std::exception& exp)
	{
		std::cerr << "Exception caught : " << exp.what() << "\n"; 
	}
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &Bureau)
{
	output << "Bureaucrat " << Bureau.getName() << " has a grade of " << Bureau.getGrade();
	if (Bureau.getGrade() == 0)
		output << " Due to miss graring";
	output << "\n";
	return (output);
}