/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 20:23:44 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/03 19:55:39 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : GradeToSign(1), GradeToExec(1)
{
	Signed = 0;
}

AForm::AForm(std::string _name, int _gradetosign, int _gradetoexec) :
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

AForm::AForm(const AForm &frm) : Name(frm.Name), GradeToSign(frm.GradeToSign), GradeToExec(frm.GradeToExec)
{
	*this = frm;
}

AForm &AForm::operator=(const AForm &frm)
{
	this->Signed = frm.Signed;
	return (*this);
}

AForm::~AForm()
{
	
}

std::string	AForm::getName(void) const
{
	return (Name);
}

bool AForm::getSign(void) const
{
	return (Signed);
}

int	AForm::getGradeToSign(void) const
{
	return (GradeToSign);
}

int	AForm::getGradeToExec(void) const
{
	return (GradeToExec);
}

// void AForm::beSigned(Bureaucrat &Bureau)
// {
// 	try
// 	{
// 		if (Bureau.getGrade() <= this->GradeToSign)
// 			Signed = 1;
// 		else
// 			throw (GradeTooLowException());
// 	}
// 	catch (const std::exception &exp)
// 	{
// 		std::cerr << "Exception caught : " << exp.what();
// 	}
// }

std::ostream &operator<<(std::ostream &output, const AForm &frm)
{
	output << "Bureaucrat " << frm.getName() << " has a gradeToSign of " << frm.getGradeToSign()
			<< " and a GradeToExecute of " << frm.getGradeToExec() << " and a signing status of " << frm.getSign();
	output << "\n";
	return (output);
}