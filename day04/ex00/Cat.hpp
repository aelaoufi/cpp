#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat();
		Cat(std::string _type);
		Cat(const Cat &Catt);
		Cat &operator=(const Cat &Catt);
		~Cat();

		virtual void	makeSound(void) const;
};

#endif