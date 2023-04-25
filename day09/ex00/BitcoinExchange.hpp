#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#define BAD_INPUT -1
#define NEGATIVE -2
#define TOOLARGE -3
#define BAD_FORMAT -4
#define GOOD 1

typedef struct s_vars
{
	std::map<std::string, float> mapp;
	int							first_line;
	int							first_line2;
	std::string					line;
	std::string					data;
}				t_vars;

void	opening_files(char *filename);


// class BitcoinExchange
// {
// 	private :
// 		std::vector<std::string> date;
// 		std::vector<float> value;
	
// 	public :
// 		BitcoinExchange();
// 		BitcoinExchange(std::ifstream infile);
// 		BitcoinExchange(const BitcoinExchange &btc);
// 		BitcoinExchange &operator=(const BitcoinExchange &btc);
// 		~BitcoinExchange();

// };
#endif