#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(const FragTrap &Frag);
		FragTrap &operator=(const FragTrap &Frag);
		~FragTrap();

		void highFiveGuys(void);
		void attack(const std::string& target);
};

#endif