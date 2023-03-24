#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected :
		std::string	type;
	
	public :
		WrongAnimal();
		WrongAnimal(std::string _type);
		WrongAnimal(const WrongAnimal &Anml);
		WrongAnimal &operator=(const WrongAnimal &Anml);
		~WrongAnimal();

		void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif