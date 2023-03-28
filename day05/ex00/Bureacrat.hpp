#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

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
		int			getGrade(void);
		Bureaucrat	operator++();
		Bureaucrat	operator--();
		Bureaucrat	operator++(int);
		Bureaucrat	operator--(int);
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const
			throw() 
			{
            	return ("Error : GradeTooLow\n");
        	}
		};
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const
			throw() 
			{
            	return ("Error : GradeTooHigh\n");
        	}
		};
};

Bureaucrat &operator<<(std::ostream &output, const Bureaucrat &Bureau);

#endif