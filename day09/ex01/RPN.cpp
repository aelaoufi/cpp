/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:24:46 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/05/03 16:23:04 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int isoperator(char c)
{
	if (c == '/' || c == '+' || c == '-' || c == '*')
		return (1);
	else
		return (0);
}

void	check_RPNline(char *line)
{
	for (int i = 0; line[i]; i++)
	{
		while (isspace(line[i]))
			i++;
		if (line[i] && isdigit(line[i]) == 0 && isoperator(line[i]) == 0)
		{
			std::cout << "Error : wrong Reverse Polish Notation format";
			exit(0);
		}
	}
}

int	calculate_operand(std::stack<int> &stak, char op)
{		
	int n1 = stak.top();
	stak.pop();
	int n2 = stak.top();
	stak.pop();
	if (op == '+')
		return (n1 + n2);
	if (op == '-')
		return (n2 - n1);
	if (op == '/')
	{
		if (n1 == 0)
		{
			std::cerr << "Can't divide by 0\n";
			exit(0);
		}
		return (n2 / n1);
	}
	return (n1 * n2);
}

void	do_the_math(char *line)
{
	check_RPNline(line);
	std::stack<int> stak;
	for (int i = 0; line[i]; i++)
	{
		while (isspace(line[i]))
			i++;
		if (isdigit(line[i]))
			stak.push(line[i] - 48);
		if (isoperator(line[i]) && stak.size() > 1)
		{
			int topush = calculate_operand(stak, line[i]);
			stak.push(topush);
		}
	}
	if (!stak.empty())
		std::cout << stak.top() << "\n";
}