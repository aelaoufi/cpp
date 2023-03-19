#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private :
		Brain *brain;
	public :
		Cat();
		Cat(std::string _type);
		Cat(const Cat &Catt);
		Cat &operator=(const Cat &Catt);
		~Cat();

		void	makeSound(void) const;
		void	printIdeas(void) const;
};

#endif