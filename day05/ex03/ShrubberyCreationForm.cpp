/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:04:28 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/05 22:02:07 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Target(_target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrub)
{
	*this = shrub;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrub)
{
	this->Target = shrub.Target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (Target);
}

// void	ShrubberyCreationForm::beSigned(Bureaucrat &Bureau)
// {
// 	try
// 	{
// 		if (getGradeToSign() > 145 || getGradeToExec() > 137)
// 			throw (GradeTooLowException());
// 		else
// 		{
// 			std::ofstream file(Target + "_shrubbery");
// 			file << "          /\n         /  \\\n        /    \\\n       /      \\\n      /        \\\n     /          \\\n    /            \\\n   /              \\\n  /                \\\n /__________________\\\n        |||||\n        |||||\n        |||||\n        |||||\n        |||||\n        |||||\n        |||||\n        |||||\n        |||||\n        |||||\n        |||||\n        |||||\n";
// 			file.close();
// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << "Shrubbery Exeption caught" << e.what();
// 	}
// }

void	ShrubberyCreationForm::beSigned(Bureaucrat &Bureau)
{
	try
	{
		if (Bureau.getGrade() > 145)
			throw (GradeTooLowException());
		else
			this->sign(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Shruberry Coulnd't Sign " << e.what();
	}
}

void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (executor.getGrade() > 137)
			throw (GradeTooLowException());
		else
		{
			std::ofstream file(Target + "_shrubbery");
			file << "          /\\\n         /  \\\n        /    \\\n       /      \\\n      /        \\\n     /          \\\n    /            \\\n   /              \\\n  /                \\\n /__________________\\\n        |||||\n        |||||\n        |||||\n        |||||\n        |||||\n        |||||\n        |||||\n        |||||\n        |||||\n";
			file.close();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Shruberry Coulnd't execute " << e.what();
	}
	
}