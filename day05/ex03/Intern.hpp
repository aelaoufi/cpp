#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public :
		Intern();
		Intern(const Intern &_intern);
		Intern &operator=(const Intern &_intern);
		~Intern();

		AForm	*makeForm(std::string Form, std::string Target);
};

#endif