#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private :
		T				*array;
		unsigned int	_n;

	public :
		Array() { array = NULL; }

		Array(unsigned int n) 
		{
			array = new T[n];
			_n = n;
		}

		Array(const Array &arr)
		{
			this->array = new T[arr._n];
		}

		Array operator=(const Array &arr)
		{
			for (unsigned int i = 0; i < _n; i++)
				this->array[i] = arr.array[i];
			return (*this);
		}

		~Array() { delete array; }

		unsigned int	size(void) const
		{
			return (_n);
		}

		class ArraySize : public std::exception
		{
			virtual const char* what() const
			throw() 
			{
            	return ("Size does not match the index inserted");
        	}
		};
		int &operator[](unsigned int index)
		{
			if (index < _n && index >= 0)
				return (this->array[index]);
			else
			{
				throw ArraySize();
			}
		}
};

#endif