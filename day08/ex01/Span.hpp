#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

class Span
{
	private :
		std::vector<int> vect;
		unsigned int	N;

	public :
		Span();
		Span(unsigned int _N);
		Span(const Span &spn);
		Span &operator=(const Span &spn);


		void			addNumber(int value);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);


		class MaximumSizeReached : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class NoSpan : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};


		~Span();
};

#endif