#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure(std::string type);
		Cure(const Cure &dwa);
		Cure &operator=(const Cure &dwa);

		void		use(ICharacter &target);
		~Cure();
};

#endif