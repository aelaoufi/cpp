#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
int	easyfind(T findIn, int toFind)
{
	for (unsigned long i = 0; i < findIn.size(); i++)
	{
		if (findIn[i] == toFind)
			return (i);
	}
	return (-1);
}

#endif