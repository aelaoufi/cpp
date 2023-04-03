#ifndef FORM_HPP
#define FORM_HPP

#include "Bureacrat.hpp"

class Bureaucrat;

class AForm
{
	private :
		const std::string	Name;
		bool				Signed;
		const int			GradeToSign;
		const int			GradeToExec;
	public :
		AForm();
		AForm(std::string _name, int _gradetosign, int _gradetoexec);
		AForm(const AForm &frm);
		AForm &operator=(const AForm &frm);
		~AForm();

		std::string			getName(void) const;
		bool				getSign(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExec(void) const;
		void				sign(bool sign);
		virtual void		beSigned(Bureaucrat &Bureau) = 0;
		virtual void		execute(Bureaucrat const &executor) const = 0;

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

std::ostream &operator<<(std::ostream &output, const AForm &frm);

#endif