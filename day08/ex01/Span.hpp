#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>

class Span
{
	private :
		int				*integers;
		unsigned int	N;

	public :
		Span();
		Span(unsigned int _N);
		Span(const Span &spn);
		Span &operator=(const Span &spn);

		void			addNumber(int Value);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

		~Span();
};

#endif