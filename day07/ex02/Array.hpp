#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private :
		T	*array;

	public :
		Array() { array = new T[]; }
		Array(unsigned int n) { array = new T[n]; }
		Array(const Array arr) { this = arr; }
		Array operator=(const Array arr)
		{
			for (int i = 0; arr.array[i]; i++)
				this->array[i] = arr.array[i];
		}

		int &operator[](unsigned int index)
		{
			this->array[index];
		}
		~Array() { delete array[]; }

		unsigned int	size(void) const
		{
			for (unsigned int i = 0; this->array[i]; i++)
				;
			return (i);
		}
};

#endif