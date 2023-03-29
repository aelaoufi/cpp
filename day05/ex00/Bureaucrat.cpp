/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anass_elaoufi <anass_elaoufi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:23:42 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/29 01:52:26 by anass_elaou      ###   ########.fr       */
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
			throw (Bureaucrat::GradeTooHighException());
		if (_Grade > 150)
			throw (Bureaucrat::GradeTooLowException());
		Grade = _Grade;
	}
	catch (const std::exception &exp)
	{
		std::cerr << "Exception caught : " << exp.what() << "\n"; 
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
		std::cerr << "Exception caught : " << exp.what() << "\n"; 
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
	output << "Bureaucrat " << Bureau.getName() << " has a grade of " << Bureau.getGrade() << "\n";
	return (output);
}