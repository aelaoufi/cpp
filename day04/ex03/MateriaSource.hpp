#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
	protected :
		AMateria *slots[4];
	public :
		MateriaSource();
		MateriaSource(const MateriaSource &MatSource);
		MateriaSource &operator=(const MateriaSource &MatSource);
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);
};

#endif