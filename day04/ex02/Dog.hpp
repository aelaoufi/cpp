#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain *brain;
	public :
		Dog();
		Dog(std::string _type);
		Dog(const Dog &Dogg);
		Dog &operator=(const Dog &Dogg);
		~Dog();

		void	makeSound(void) const;
		void	printIdeas(void) const;
};

#endif