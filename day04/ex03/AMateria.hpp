#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
	protected :
		std::string type;

    public:
		AMateria();
		AMateria(std::string const &_type);
		AMateria(const AMateria &Materia);
		AMateria &operator=(const AMateria &Materia);

		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
		virtual				~AMateria();
};

#endif