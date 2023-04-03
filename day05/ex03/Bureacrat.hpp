#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	protected :
		const std::string	Name;
		int					Grade;

	public :
		Bureaucrat();
		Bureaucrat(std::string _Name, int _Grade);
		Bureaucrat(const Bureaucrat &Bureau);
		Bureaucrat &operator=(const Bureaucrat &Bureau);
		~Bureaucrat();

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		IncrmntGrade(void);
		void		DcrmntGrade(void);
		void		signForm(AForm &frm);
		void		executeForm(AForm const &form);

		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const
			throw() 
			{
            	return ("GradeTooLow\n");
        	}
		};
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const
			throw()
			{
            	return ("GradeTooHigh\n");
        	}
		};
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &Bureau);

#endif