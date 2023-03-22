#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	protected :
		std::string Name;
		AMateria 	*slots[5];

	public :
		Character();
		Character(std::string _Name);
		Character(const Character &Charact);
		Character &operator=(const Character &Charact);
		~Character();

		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif