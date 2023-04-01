/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:23:44 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/01 19:57:10 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : GradeToSign(1), GradeToExec(1)
{
	Signed = 0;
}

Form::Form(std::string _name, int _gradetosign, int _gradetoexec) :
	Name(_name), GradeToSign(_gradetosign), GradeToExec(_gradetoexec)
{
	Signed = 0;
	try
	{
		if (_gradetoexec < 1 || _gradetosign < 1)
		{
			throw (GradeTooHighException());
		}
		if (_gradetoexec > 150 || _gradetosign > 150)
		{
			throw (GradeTooLowException());
		}
	}
	catch (const std::exception &exp)
	{
		std::cerr << "Exception caught : " << exp.what();
	}
}

Form::Form(const Form &frm) : Name(frm.Name), GradeToSign(frm.GradeToSign), GradeToExec(frm.GradeToExec)
{
	*this = frm;
}

Form &Form::operator=(const Form &frm)
{
	this->Signed = frm.Signed;
	return (*this);
}

Form::~Form()
{
	
}

std::string	Form::getName(void) const
{
	return (Name);
}

bool Form::getSign(void) const
{
	return (Signed);
}

int	Form::getGradeToSign(void) const
{
	return (GradeToSign);
}

int	Form::getGradeToExec(void) const
{
	return (GradeToExec);
}

void Form::beSigned(Bureaucrat &Bureau)
{
	try
	{
		if (Bureau.getGrade() <= this->GradeToSign)
			Signed = 1;
		else
			throw (GradeTooLowException());
	}
	catch (const std::exception &exp)
	{
		std::cerr << "Exception caught : " << exp.what();
	}
}

std::ostream &operator<<(std::ostream &output, const Form &frm)
{
	output << "Bureaucrat " << frm.getName() << " has a gradeToSign of " << frm.getGradeToSign()
			<< " and a GradeToExecute of " << frm.getGradeToExec() << " and a signing status of " << frm.getSign();
	output << "\n";
	return (output);
}