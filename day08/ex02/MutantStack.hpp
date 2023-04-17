#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>

template <typename T, typename container = std::deque<T>>
class MutantStack : public std::stack<T, container>
{
	public :

		typedef typename container::iterator iterator;
		typedef typename container::reverse_iterator reverse_iterator;
		typedef typename container::const_iterator const_iterator;
		typedef typename container::const_reverse_iterator const_reverse_iterator;

		MutantStack<T, container>() : std::stack<T, container>;
		MutantStack<T, container>(const MutantStack<T, container> &mtn);
		MutantStack<T, container>	&operator=(const MutantStack<T, container> &mtn);

		iterator begin()
		{
			return (c.begin());
		}
		iterator end()
		{
			return (c.end());
		}
		reverse_iterator rbegin()
		{
			return (c.rbegin());
		}
		reverse_iterator rend()
		{
			return (c.rend());
		}

		const_iterator cbegin() const
		{
			return (c.cbegin());
		}
		const_iterator cend() const
		{
			return (c.cend());
		}
		const_reverse_iterator crbegin() const
		{
			return (c.crbegin());
		}
		const_reverse_iterator crend() const
		{
			return (c.crend());
		}

		~MutantStack()<T, container>;
};

#endif