#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure(const Cure &dwa);
		Cure &operator=(const Cure &dwa);

		void		use(ICharacter &target);
		Cure		*clone() const;
		~Cure();
};

#endif