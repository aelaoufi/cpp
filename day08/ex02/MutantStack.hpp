#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
	public :

		typedef typename container::iterator iterator;
		typedef typename container::reverse_iterator reverse_iterator;
		typedef typename container::const_iterator const_iterator;
		typedef typename container::const_reverse_iterator const_reverse_iterator;

		MutantStack<T, container>() : std::stack<T, container>() {};
		MutantStack<T, container>(const MutantStack<T, container> &mtn) { *this = mtn; };
		MutantStack<T, container>	&operator=(const MutantStack<T, container> &mtn)
		{
			(void)mtn;
			return (*this);
		};

		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
		reverse_iterator rbegin()
		{
			return (this->c.rbegin());
		}
		reverse_iterator rend()
		{
			return (this->c.rend());
		}

		const_iterator cbegin() const
		{
			return (this->c.cbegin());
		}
		const_iterator cend() const
		{
			return (this->c.cend());
		}
		const_reverse_iterator crbegin() const
		{
			return (this->c.crbegin());
		}
		const_reverse_iterator crend() const
		{
			return (this->c.crend());
		}

		~MutantStack(){};
};

#endif