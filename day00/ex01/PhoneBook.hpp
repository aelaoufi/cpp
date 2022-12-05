#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>

static int j = 0;

class Contact
{
	public :
	std::string		first_name, last_name, nickname, darkest_secret, phone_number;
};

class PhoneBook
{
	Contact  *contacts;

	public :
		PhoneBook()
		{
			contacts = new Contact[7]; 
		}
		void add(std::string first_n, std::string last_n, std::string nick_n, std::string darkest_s, std::string phone_n)
		{
			if (first_n.empty() || last_n.empty() || nick_n.empty() || darkest_s.empty() || phone_n.empty())
			{
				std::cout << "FIELDS CAN'T BE EMPTY\n";
				return ;
			}
			contacts[j].first_name = first_n;
			contacts[j].last_name = last_n;
			contacts[j].nickname = nick_n;
			contacts[j].darkest_secret = darkest_s;
			contacts[j].phone_number = phone_n;
			j++;
			if (j == 8)
				j = 0;
		}
		void search(void)
		{
			char	contact_id[5];

			std::cout << "Enter the contact ID (1 to 8): ";
			std::cin >> contact_id;
			std::cin.ignore(1, '\n');
			while (isdigit(contact_id[0]) == 0 || (atoi(contact_id) > 8 || atoi(contact_id) < 0) || atoi(contact_id) > j)
			{
				std::cout << "Invalid ID or Contact Non Existant, Try Again : ";
				std::cin >> contact_id;
				std::cin.ignore(1, '\n');
			}
			print_searched(contact_id);
		}

		void print_searched(char *contact_id)
		{
			std::cout << contact_id << " | ";
			if (contacts[atoi(contact_id) - 1].first_name.length() > 10)
				std::cout << contacts[atoi(contact_id) - 1].first_name.substr(0, 9) << '.'; 
			else
				std::cout << contacts[atoi(contact_id) - 1].first_name;
			std::cout << " | ";
			if (contacts[atoi(contact_id) - 1].last_name.length() > 10)
				std::cout << contacts[atoi(contact_id) - 1].last_name.substr(0, 9) << '.'; 
			else
				std::cout << contacts[atoi(contact_id) - 1].last_name;
			std::cout << " | ";
			if (contacts[atoi(contact_id) - 1].nickname.length() > 10)
				std::cout << contacts[atoi(contact_id) - 1].nickname.substr(0, 9) << '.'; 
			else
				std::cout << contacts[atoi(contact_id) - 1].nickname;
			std::cout << '\n';
		}
};



#endif