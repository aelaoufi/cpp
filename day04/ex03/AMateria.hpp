#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria : public ICharacter
{
	protected :
		std::string	const &type;

    public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &Materia);
		AMateria &operator=(const AMateria &Materia);

		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif