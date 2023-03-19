#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	protected :
		std::string ideas[100];
	public :
		Brain();
		Brain(std::string _ideas);
		Brain(const Brain &Brr);
		Brain &operator=(const Brain &Brr);
		~Brain();

		void	printSomeIdeas(void) const;
};

#endif