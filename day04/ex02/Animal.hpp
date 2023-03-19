#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected :
		std::string	type;
	
	public :
		Animal();
		Animal(std::string _type);
		Animal(const Animal &Anml);
		Animal &operator=(const Animal &Anml);
		virtual ~Animal();

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

#endif