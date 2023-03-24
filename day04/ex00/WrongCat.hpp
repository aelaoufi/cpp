#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(std::string _type);
		WrongCat(const WrongCat &WrongCatt);
		WrongCat &operator=(const WrongCat &WrongCatt);
		~WrongCat();

		void	makeSound(void) const;
};

#endif