#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"


static int track_j = 0;

class Contact
{
	std::string		first_name, last_name, nickname, darkest_secret, phone_number;

	public :
		void		SetContactFirstName(std::string &first_n);
		std::string	GetContactFirstName();

		void		SetContactLastName(std::string &last_n);
		std::string	GetContactLastName();

		void		SetContactNickname(std::string &nick_n);
		std::string	GetContactNickname();

		void		SetContactDarkestSecret(std::string &darkest_s);
		std::string	GetContactDarkestSecret();

		void		SetContactPhoneNumber(std::string &phone_n);
		std::string	GetContactPhoneNumber();
};

#endif