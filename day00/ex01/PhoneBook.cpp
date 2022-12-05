#include "PhoneBook.hpp"

void	trunc(std::string str)
{
	if (str.length() > 10)
		str.replace('.', 9, 1, 0);
}
void	add_contact(PhoneBook phonebook)
{
	std::string	f_name;
	std::string	l_name;
	std::string	nickname;
	std::string	secret;
	std::string	phone_num;

	std::cout << "First Name : ";
	std::getline(std::cin, f_name);
	std::cout << "Last Name : ";
	std::getline(std::cin, l_name);
	std::cout << "Nickname : ";
	std::getline(std::cin, nickname);
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, secret);
	std::cout << "Phone Number: ";
	std::getline(std::cin, phone_num);
	phonebook.add(f_name, l_name, nickname, secret, phone_num);
}

int main ()
{
	PhoneBook phonebook;
	std::string	prompt;

	while (1)
	{
		std::cout << "Enter your action : ";
		std::getline(std::cin, prompt);
		if (prompt.compare("ADD") == 0)
		{
			add_contact(phonebook);
		}
		if (prompt.compare("SEARCH") == 0)
		{
			phonebook.search();
		}
		if (prompt.compare("EXIT") == 0)
		{
			return (0);
		}
	}
	return (0);
}