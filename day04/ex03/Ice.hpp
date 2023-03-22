#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(std::string type);
		Ice(const Ice &Spice);
		Ice &operator=(const Ice &Spice);

		void		use(ICharacter &target);
		AMateria	*clone() const;
		~Ice();
};

#endif