#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <fstream>

class RobotomyRequestForm : public AForm
{
	private :
		std::string Target;

	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string _target);
		RobotomyRequestForm(const RobotomyRequestForm &shrub);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &shrub);
		~RobotomyRequestForm();

		std::string			getTarget(void) const;
		virtual void		beSigned(Bureaucrat &Bureau);
};

#endif