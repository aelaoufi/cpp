#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <string>
#include <deque>
#include <vector>
#define SPLIT_LIMIT 15

void	check_args(char **args);
void	sort_them(char **args, std::vector<int> &vec, std::deque<int> &deq);

#endif