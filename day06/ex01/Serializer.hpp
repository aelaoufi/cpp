#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef struct Data
{
	int 	intbohdo;
	char	charbohdo;
	double	doublebohdo;
	char	*charmachibohdo;
};

class Serialize
{
	public :
		static uintptr_t	serialize(Data *ptr);
		static Data 		*deserialize(uintptr_t raw);
}; 

#endif