#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : Public Animal
{
	public :
		Cat();
		Cat(std::string _type);
		Cat(const Animal &Anml);
		Animal &operator=(const Animal &Anml);
		~Animal();

		virtual void	makeSound(void);
		std::string		getName(void);
};

#endif