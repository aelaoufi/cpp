/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:23:44 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/03/30 20:41:45 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : GradeToExec(1) , GradeToSign(1)
{
	
}

Form::Form(std::string _name, bool _signed, int _gradetosign, int _gradetoexec) :
	Name(_name), GradeToSign(_gradetosign), GradeToExec(_gradetoexec)
{
	Signed = _signed;
	try
	{
		if (_gradetoexec < 1 || _gradetosign < 1)
		{
			throw (Form::GradeTooHighException());
		}
		if (_gradetoexec > 1 || _gradetosign > 1)
		{
			throw (Form::GradeTooLowException());
		}
	}
	catch (const std::exception &exp)
	{
		std::cerr << "Exception caught : " << exp.what(); 
	}
}

Form::Form(const Form &Bureau)
{
	*this = Bureau; 
}

Form &Form::operator=(const Form &frm)
{
	
	return (*this);
}

Form::~Form()
{
	
}

std::string	Form::getName(void) const
{
	return (Name);
}

int	Form::getGradeToSign(void) const
{
	return (GradeToSign);
}