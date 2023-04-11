#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *var1, unsigned int array_size, void(f)(unsigned int, T))
{
	if (T && f && array_size)
	{
		int i = 0;
		while (T[i] && i < array_size)
		{
			f(array_size, var1[i]);
			i++;
		}
	}
}

#endif