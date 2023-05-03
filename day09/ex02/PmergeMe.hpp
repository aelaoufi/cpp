#ifndef PmergeMe_HPP
#define PmergeMe_HPP

# include <iostream>
# include <string>
# include <deque>
# include <vector>
# include <algorithm>
# include <sys/time.h>
# include <ctime>
# include <time.h>

#define SPLIT_LIMIT 10

template <typename T>
void	insert_sort(T &container)
{
	for (size_t i = 0; i < container.size() - 1; i++)
	{
		for (size_t j = i + 1; j < container.size(); j++)
		{
			if (container[i] > container[j])
			{
				int temp = container[i];
				container[i] = container[j];
				container[j] = temp;
			}
		}
	}
}

template <typename T>
void	merge(T &cont, T &left, T &right)
{
	size_t i = 0, j = 0, k = 0;
	while (i < left.size() && j < right.size())
	{
		if (left[i] < right[j])
		{
			cont[k] = left[i];
			i++;
		}
		else
		{
			cont[k] = right[j];
			j++;
		}
		k++;
	}
	while (i < left.size())
	{
		cont[k] = left[i];
		i++;
		k++;
	}
	while (j < right.size())
	{
		cont[k] = right[j];
		j++;
		k++;
	}
}

template <typename T>
void	merge_insert(T &cont)
{
	if (cont.size() < SPLIT_LIMIT)
		insert_sort(cont);
	else
	{
		size_t mid = cont.size() / 2;
		T left;
		T right;
		for (size_t i = 0; i < mid; i++)
			left.push_back(cont[i]);
		for (size_t i = mid; i < cont.size(); i++)
			right.push_back(cont[i]);
		merge_insert(left);
		merge_insert(right);
		merge(cont, left, right);
	}
}

double 		gettime_ms(void);
void		check_args(char **args);
void		init_containers(char **args, std::vector<int> &vec, std::deque<int> &deq, int ac);
void		check_duplicate(std::vector<int> vec);
void		print_values(std::vector<int> vec);

#endif