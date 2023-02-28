/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:20:01 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/27 18:28:02 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

char    *AappendChar(char *filename)
{
	int len = strlen(filename);
	char replace[9] = ".replace";
	char* ret = new char[len + 9];

	strcpy(ret, filename);
	for (int i = 0; i < 9; i++)
	{
		ret[len] = replace[i];
		len++;
	}
	ret[len] = '\0';
	return (ret);
}

void    change_occurrence(std::string line, char *to_change, char *to_what, char *filename)
{
    char *replace = AappendChar(filename);
	std::fstream outfile(replace, std::ios_base::app);
	int pos = line.find(to_change, 0);
	if (pos == -1)
	{
		outfile << line << "\n";
		return ;
	}
	int word_len  = strlen(to_change);
	int line_len = line.length();
	while (pos < line_len && pos != -1)
	{
        line.erase(pos, word_len);
		line.insert(pos, to_what);
		pos += word_len;
		pos = line.find(to_change, pos);
	}
	outfile << line << "\n";
    delete[] replace;
	outfile.close();
}

void    Replace_word(char *filename, char *to_change, char *to_what)
{
	std::string line;
	std::ifstream infile(filename);

	while (std::getline(infile, line))
	{
		change_occurrence(line, to_change, to_what, filename);
	}
	infile.close();
}