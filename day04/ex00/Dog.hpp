#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public :
		Dog();
		Dog(std::string _type);
		Dog(const Dog &Dogg);
		Dog &operator=(const Dog &Dogg);
		~Dog();

		virtual void	makeSound(void) const;
};

#endif