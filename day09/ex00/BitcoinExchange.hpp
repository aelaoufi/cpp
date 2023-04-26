#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <map>

typedef struct s_vars
{
	std::map<std::string, float> mapp;
	int							first_line;
	std::string					line;
	std::string					data;
}				t_vars;

void	opening_files(char *filename);

#endif