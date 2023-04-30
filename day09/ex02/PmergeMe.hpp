#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <algorithm>
#define SPLIT_LIMIT 10

void	check_args(char **args);

template <typename T>
void	merge_insert(T &cont);


void	init_containers(char **args, std::vector<int> &vec, std::deque<int> &deq, int ac);

#endif