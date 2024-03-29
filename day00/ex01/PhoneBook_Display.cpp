/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_Display.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:36:36 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/18 16:58:21 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static int j = 0;

void	print_all(PhoneBook phonebook, int id)
{
	std::cout << id << " | ";
	if (phonebook.GetFirstName(id).length() > 10)
		std::cout << std::setw(10) << phonebook.GetFirstName(id).substr(0, 9) << '.'; 
	else
		std::cout << std::setw(10) << phonebook.GetFirstName(id);
	std::cout << " | ";
	if (phonebook.GetLastName(id).length() > 10)
		std::cout << std::setw(10) << phonebook.GetLastName(id).substr(0, 9) << '.'; 
	else
		std::cout << std::setw(10) << phonebook.GetLastName(id);
	std::cout << " | ";
	if (phonebook.GetNickname(id).length() > 10)
		std::cout << std::setw(10) << phonebook.GetNickname(id).substr(0, 9) << '.'; 
	else
		std::cout << std::setw(10) << phonebook.GetNickname(id);
	std::cout << '\n';
}
void	print_searched(char *contact_id, PhoneBook phonebook)
{
	std::cout << contact_id << " | ";
	if (phonebook.GetFirstName(atoi(contact_id)).length() > 10)
		std::cout << std::setw(10) << phonebook.GetFirstName(atoi(contact_id)).substr(0, 9) << '.'; 
	else
		std::cout << std::setw(10) << phonebook.GetFirstName(atoi(contact_id));
	std::cout << " | ";
	if (phonebook.GetLastName(atoi(contact_id)).length() > 10)
		std::cout << std::setw(10) << phonebook.GetLastName(atoi(contact_id)).substr(0, 9) << '.'; 
	else
		std::cout << std::setw(10) << phonebook.GetLastName(atoi(contact_id));
	std::cout << " | ";
	if (phonebook.GetNickname(atoi(contact_id)).length() > 10)
		std::cout << std::setw(10) << phonebook.GetNickname(atoi(contact_id)).substr(0, 9) << '.'; 
	else
		std::cout << std::setw(10) << phonebook.GetNickname(atoi(contact_id));
	std::cout << " | ";
	if (phonebook.GetDarkestSecret(atoi(contact_id)).length() > 10)
		std::cout << std::setw(10) << phonebook.GetDarkestSecret(atoi(contact_id)).substr(0, 9) << '.'; 
	else
		std::cout << std::setw(10) << phonebook.GetDarkestSecret(atoi(contact_id));
	std::cout << " | ";
	if (phonebook.GetPhoneNumber(atoi(contact_id)).length() > 10)
		std::cout << std::setw(10) << phonebook.GetPhoneNumber(atoi(contact_id)).substr(0, 9) << '.'; 
	else
		std::cout << std::setw(10) << phonebook.GetPhoneNumber(atoi(contact_id));

	std::cout << '\n';
}

void search(PhoneBook phonebook)
{
	char	contact_id[5];

	for (int i = 1; i <= track_j; i++)
	{
		if (phonebook.GetFirstName(i).empty())
			break ;
		print_all(phonebook, i);
	}
	std::cout << "Enter the contact ID (1 to 8): ";
	std::cin >> contact_id;
	std::cin.ignore(1, '\n');
	if (isdigit(contact_id[0]) == 0 || (atoi(contact_id) > 8 || atoi(contact_id) < 1) || atoi(contact_id) > track_j)
	{
		std::cout << "Invalid ID or Contact Non Existant.\n";
		return ;
	}
	print_searched(contact_id, phonebook);
}

int	check_if_empty(std::string str)
{
	if (str.empty())
		return (-1);
	return (1);
}

void add(PhoneBook &phonebook, std::string first_n, std::string last_n, std::string nick_n, std::string darkest_s, std::string phone_n)
{
	phonebook.SetFirstName(first_n, j);
	phonebook.SetLastName(last_n, j);
	phonebook.SetNickname(nick_n, j);
	phonebook.SetDarkestSecret(darkest_s, j);
	phonebook.SetPhoneNumber(phone_n, j);
	j++;
	track_j++;
	if (j == 8)
		j = 0;
	if (track_j > 8)
		track_j = 8;
}

void	add_contact(PhoneBook &phonebook)
{
	std::string	f_name;
	std::string	l_name;
	std::string	nickname;
	std::string	secret;
	std::string	phone_num;

	while (1)
	{
		std::cout << "First Name : ";
		std::getline(std::cin, f_name);
		if (check_if_empty(f_name) == -1)
			std::cout << "FIELD CAN'T BE EMPTY\n";
		else
			break ;
	}
	while (1)
	{
		std::cout << "Last Name : ";
		std::getline(std::cin, l_name);
		if (check_if_empty(l_name) == -1)
		std::cout << "FIELD CAN'T BE EMPTY\n";
		else
			break ;
	}
	while (1)
	{
		std::cout << "Nickname : ";
		std::getline(std::cin, nickname);
		if (check_if_empty(nickname) == -1)
			std::cout << "FIELD CAN'T BE EMPTY\n";
		else
			break ;
	}
	while (1)
	{
		std::cout << "Darkest Secret : ";
		std::getline(std::cin, secret);
		if (check_if_empty(secret) == -1)
			std::cout << "FIELD CAN'T BE EMPTY\n";
		else
			break ;
	}
	while (1)
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, phone_num);
		if (check_if_empty(phone_num) == -1)
			std::cout << "FIELD CAN'T BE EMPTY\n";
		else
			break ;
	}
	add(phonebook, f_name, l_name, nickname, secret, phone_num);
}

int main (int ac, char **av)
{
	PhoneBook phonebook;
	std::string	prompt;
	
	(void)av;
	if (ac > 1)
	{
		std::cout << "Program takes no arguments.\n";
		return (-1);
	}
	while (1)
	{
		std::cout << "\n   		{ PhoneBook }\n	     ADD, SEARCH OR EXIT\n";
		std::cout << "Enter your action : ";
		std::getline(std::cin, prompt);
		if (std::cin.eof())
			return (0);
		check_if_empty(prompt);
		if (prompt.compare("ADD") == 0 || prompt.compare("add") == 0)
		{
			add_contact(phonebook);
		}
		if (prompt.compare("SEARCH") == 0 || prompt.compare("search") == 0)
		{
			search(phonebook);
		}
		if (prompt.compare("EXIT") == 0 || prompt.compare("exit") == 0)
		{
			return (0);
		}
	}
	return (0);
}