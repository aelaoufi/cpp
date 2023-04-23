#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>


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
typedef struct s_vars
{
	std::vector<std::string>	date;
	std::vector<float>			value;
	std::vector<int>			code;
	std::string					line;
}				t_vars;

void	InFile_parsing(char *filename);

#endif