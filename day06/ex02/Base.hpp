#ifndef BASE_HPP
#define BASE_HPP


#include <string>
#include <iostream>

class Base
{
	public :
		virtual ~Base(){};
};

Base	*genarate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif