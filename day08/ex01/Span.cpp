/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 22:37:50 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/04/16 00:55:50 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char *Span::MaximumSizeReached::what() const throw()
{
	return ("Maximum Size Reached, can't add more integers.");
}

const char *Span::NoSpan::what() const throw()
{
	return ("Can't calculate span, not enough data.");
}

Span::Span()
{

}

Span::Span(unsigned int _N) : N(_N)
{
	
}

Span::Span(const Span &spn)
{
	*this = spn;
}

Span &Span::operator=(const Span &spn)
{
	for (unsigned int i = 0; i < spn.vect.size(); i++)
		this->vect.push_back(vect[i]);
	this->N = spn.N;
	return (*this);
}

void	Span::addNumber(int value)
{
	try
	{
		if (vect.size() < N)
			vect.push_back(value);
		else
			throw MaximumSizeReached();
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

unsigned int	Span::shortestSpan(void)
{

	if (this->vect.size() > 1)
	{
		std::vector<int> tmpV;
		
		for (unsigned int i = 0; i < this->vect.size(); i++)
			tmpV.push_back(this->vect[i]);
		std::sort(tmpV.begin(), tmpV.end());
		int shortSpan = tmpV[1] - tmpV[0];
		for (unsigned int i = 1; i < this->vect.size() - 1; i++)
		{
			if (tmpV[i + 1] - tmpV[i] < shortSpan)
				shortSpan = tmpV[i + 1] - tmpV[i];
		}
		if (tmpV[tmpV.size() - 1] - tmpV[tmpV.size() - 2] < shortSpan)
				shortSpan = tmpV[tmpV.size() - 1] - tmpV[tmpV.size() - 2];
		return ((unsigned int)shortSpan);
	}
	else
		throw NoSpan();
}

unsigned int	Span::longestSpan(void)
{
	if (this->vect.size() > 1)
	{
		int				maxElement;
		int 			minElement;
		unsigned int	longspan;

		maxElement = *std::max_element(this->vect.begin(), this->vect.end());
		minElement = *std::min_element(this->vect.begin(), this->vect.end());
		longspan = maxElement - minElement;
		return (longspan);
	}
	else
		throw NoSpan();
}

void	Span::addBcpNumbers(unsigned int howMany)
{
	srand(time(NULL));
	for (unsigned int i = 0; i < howMany; i++)
		this->addNumber(rand() % howMany);
}

Span::~Span()
{
	
}
