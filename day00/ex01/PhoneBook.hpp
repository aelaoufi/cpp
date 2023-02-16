#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include "Contact.hpp"


static int j = 0;
static int track_j = 0;

class PhoneBook
{
	Contact  contacts[8];

	public :
		void	SetFirstName(std::string &first_n);
		std::string	GetFirstName(int id);

		void	SetLastName(std::string &last_n);
		std::string	GetLastName(int id);

		void	SetNickname(std::string &nick_n);
		std::string	GetNickname(int id);

		void	SetDarkestSecret(std::string &darkest_s);
		std::string	GetDarkestSecret(int id);

		void	SetPhoneNumber(std::string &phone_n);
		std::string	GetPhoneNumber(int id);
};



#endif