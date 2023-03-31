#ifndef FORM_HPP
#define FORM_HPP

#include "Bureacrat.hpp"

class Form
{
	private :
		const std::string	Name;
		bool				Signed;
		const int			GradeToSign;
		const int			GradeToExec;
	public :
		Form();
		Form(std::string _name, bool _signed, int _gradetosign, int _gradetoexec);
		Form(const Form &frm);
		Form &operator=(const Form &frm);
		~Form();

		std::string	getName(void) const;
		bool		getSign(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExec(void) const;
		void		beSigned(Bureaucrat &Bureau);

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

std::ostream &operator<<(std::ostream &output, const Form &frm);

#endif