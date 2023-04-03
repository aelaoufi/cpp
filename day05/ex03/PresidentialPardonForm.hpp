#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class PresidentialPardonForm : public AForm
{
	private :
		std::string Target;

	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm(const PresidentialPardonForm &pres);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &pres);
		~PresidentialPardonForm();

		std::string			getTarget(void) const;
		virtual void		beSigned(Bureaucrat &Bureau);
		virtual void		execute(Bureaucrat const &executor) const;
};

#endif