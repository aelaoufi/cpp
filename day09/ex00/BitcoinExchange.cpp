/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:53:49 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/04/23 20:53:20 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	date_format(t_vars &vars)
{
	
}

int	line_format(t_vars &vars)
{
	int i = vars.line.find_first_of('|');
	if (i == 11 && vars.line.find_first_of('|', 12) != -1)
	{
		//check date format
		date_format(vars);
	}
}

void	check_line(t_vars &vars)
{
	//check the line format
	line_format(vars);
	
	//check value
	//if all ok put the data in the container
}

void	InFile_parsing(char *filename)
{
	t_vars			vars;
	std::ifstream	infile(filename);
	
	while (std::getline(infile, vars.line))
		check_line(vars);
	
}
