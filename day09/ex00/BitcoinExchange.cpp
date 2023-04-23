/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:53:49 by anass_elaou       #+#    #+#             */
/*   Updated: 2023/04/23 18:09:59 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	check_line(t_vars vars)
{
	//check the line format
	//check date format
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
