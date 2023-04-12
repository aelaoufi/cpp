#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *var1, int array_size, void(f)(T&))
{
	if (f != NULL && array_size > 0)
	{
		int i = 0;
		while (var1[i] && i < array_size)
		{
			f(var1[i]);
			i++;
		}
	}
}

#endif