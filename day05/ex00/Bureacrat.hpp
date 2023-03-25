#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
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

};

#endif