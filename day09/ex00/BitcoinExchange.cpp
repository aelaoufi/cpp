/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:53:49 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/04/24 15:23:22 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isLeap(int year)
{
	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

bool isValidDate(int d, int m, int y)
{
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
void	date_number_check(t_vars &vars)
{
	if (vars.line.compare("date | value") == 0 && vars.first_line == 0)
	{
		vars.first_line = 1;
		return ;
	}
	int i = vars.line.find_first_of('|');
	vars.date[vars.i] = vars.line.substr(0, 10);
	vars.value[vars.i] = stof(vars.line.substr(13, vars.line.length() - 13));
	if (i == 11)
	{
		int year = stoi(vars.date[vars.i].substr(0, 4));
		int month = stoi(vars.date[vars.i].substr(5, 2));
		int day = stoi(vars.date[vars.i].substr(8, 2));
		if (isValidDate(day, month, year) == 0)
			vars.code[vars.i] == BAD_INPUT;
		else if (vars.value[vars.i] <= 0)
			vars.code[vars.i] == NEGATIVE;
		else if (vars.value[vars.i] >= 1000)
			vars.code[vars.i] == TOOLARGE;
		else
			vars.code[vars.i] == GOOD;
	}
	else
		vars.code[vars.i] == BAD_FORMAT;
	vars.i++;
}

void	compare_data(t_vars &vars)
{
	int i = 0;
	while (vars.date[i].compare(vars.data.substr(0, 10)) != 0)
	{
		//compare year then month then day maybe ??
	}
}

void	InFile_parsing(char *filename)
{
	t_vars			vars;
	std::ifstream	infile(filename);
	std::ifstream	data("data.csv");
	
	vars.i = 0;
	vars.first_line = 0;
	while (std::getline(infile, vars.line))
		date_number_check(vars);
	while (std::getline(data, vars.data))
		compare_data(vars);
}
