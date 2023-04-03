#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private :
		std::string Target;

	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string _target);
		ShrubberyCreationForm(const ShrubberyCreationForm &shrub);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrub);
		~ShrubberyCreationForm();

		std::string			getTarget(void) const;
		virtual void		beSigned(Bureaucrat &Bureau);
};

#endif