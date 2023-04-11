#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef struct 	s_data
{
	int 	intbohdo;
	char	charbohdo;
	double	doublebohdo;
}				t_data;

class Serialize
{
	public :
		static uintptr_t	serialize(t_data *ptr);
		static t_data 		*deserialize(uintptr_t raw);
}; 

#endif