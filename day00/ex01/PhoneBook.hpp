#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	Contact  contacts[8];

	public :
		void		SetFirstName(std::string &first_n, int j);
		std::string	GetFirstName(int id);

		void		SetLastName(std::string &last_n, int j);
		std::string	GetLastName(int id);

		void		SetNickname(std::string &nick_n, int j);
		std::string	GetNickname(int id);

		void		SetDarkestSecret(std::string &darkest_s, int j);
		std::string	GetDarkestSecret(int id);

		void		SetPhoneNumber(std::string &phone_n, int j);
		std::string	GetPhoneNumber(int id);
};



#endif