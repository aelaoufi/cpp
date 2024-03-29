/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:53:49 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/05/04 17:42:49 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isLeap(int year)
{
	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

bool isValidDate(int d, int m, int y)
{
	if (y == 2022 && (m > 3 || d > 29))
		return 0;
	if (y > 2022 || y < 2009)
		return 0;
	if (m < 1 || m > 12)
		return 0;
	if (d < 1 || d > 31)
		return 0;
    if (m == 2)
    {
        if (isLeap(y))
			return (d <= 29);
		else
			return (d <= 28);
    }
	if (m == 4 || m == 6 || m == 9 || m == 11)
		return (d <= 30);
	return 1;
}

int	check_date(std::string date)
{
	for (size_t j = 0; j < date.size(); j++)
	{
		if (j == 4 || j == 7)
			j++;
		if (!isdigit(date[j]))
			return (-1);
	}
	return (1);
}

int how_many_occur(std::string str, char c)
{
	int count = 0;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == c)
			count++;
	}
	return (count);
}

int	check_value(std::string value)
{
	if (!value.size() || value[value.size()] == '.' || value[0] == '.' || how_many_occur(value, '.') > 1)
		return (-1);
	for (size_t j = 0; j < value.size(); j++)
	{
		if (!isdigit(value[j]) && value[j] != '.')
			return (-1);
	}
	return (1);
}

int	date_number_check(t_vars &vars)
{
	if (vars.line.compare("date | value") == 0 && vars.first_line == 0)
	{
		vars.first_line = 1;
		return (0);
	}
	int found = vars.line.find('-');
	int found2 = vars.line.find('-', found + 1);
	if (vars.line.length() >= 10 && found == 4 && found2 == 7)
	{
		std::string date = vars.line.substr(0, 10);
		if (check_date(date) == -1)
		{
			std::cerr << "Error: bad line format" << "\n";
			return (-1);
		}
		int year = stoi(date.substr(0, 4));
		int month = stoi(date.substr(5, 2));
		int day = stoi(date.substr(8, 2));
		if (isValidDate(day, month, year) == 0)
		{
			std::cerr << "Error: bad input => " << date << "\n";
			return (0);
		}
		std::string value = vars.line.substr(13, vars.line.length() - 13);
		if (check_value(value) == -1)
		{
			std::cerr << "Error: bad line format" << "\n";
			return (-1);
		}
		if (stof(value) <= 0)
			std::cerr << "Error: not a positive number.\n";
		else if (stof(value) >= 1000)
			std::cerr << "Error: too large a number.\n";
		else
		{
			std::map<std::string, float>::iterator upBound = vars.mapp.upper_bound(date);
			if (upBound != vars.mapp.begin())
				upBound--;
			std::cout << date << " => " << value << " = " << stof(value) * upBound->second << "\n";
		}
	}
	else
	{
		std::cerr << "Error: bad line format" << "\n";
		return (-1);
	}
	return (0);
}

void	data_parse(t_vars &vars)
{
	int found = vars.data.find('-');
	int found2 = vars.data.find('-', found + 1);
	int found3 = vars.data.find(',', found2 + 1);
	if (vars.data.compare("date,exchange_rate") == 0)
		return ;
	if (found != 4 || found2 != 7 || found3 != 10 || vars.data.size() < 12
			|| !isdigit(vars.data.at(11)) || how_many_occur(vars.data, '.') > 1 || how_many_occur(vars.data, ',') > 1)
	{
		std::cerr << "data.csv file corrupted.\n";
		exit(0);
	}
	std::string date = vars.data.substr(0, 10);
	float 		exchange_rate = stof(vars.data.substr(11, vars.data.length() - 11));
	vars.mapp.insert(std::make_pair(date, exchange_rate));
}

void	opening_files(char *filename)
{
	t_vars			vars;
	std::ifstream	infile(filename);
	std::ifstream	data("data.csv");

	vars.first_line = 0;
	while (std::getline(data, vars.data))
		data_parse(vars);
	while (std::getline(infile, vars.line))
		date_number_check(vars);
}
