#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>


static int j = 0;

class Contact
{
	std::string		first_name, last_name, nickname, darkest_secret, phone_number;

	public :
		void	SetContactFirstName(std::string &first_n) { first_name = first_n;}
		std::string	GetContactFirstName() { return (first_name); }

		void	SetContactLastName(std::string &last_n) {last_name = last_n; }
		std::string	GetContactLastName() { return (last_name); }

		void	SetContactNickname(std::string &nick_n) {nickname = nick_n; }
		std::string	GetContactNickname() { return (nickname); }

		void	SetContactDarkestSecret(std::string &darkest_s) {darkest_secret = darkest_s; }
		std::string	GetContactDarkestSecret() { return (darkest_secret); }

		void	SetContactPhoneNumber(std::string &phone_n) {phone_number = phone_n; }
		std::string	GetContactPhoneNumber() { return (phone_number); }
};

class PhoneBook
{
	Contact  contacts[7];

	public :
		void	SetFirstName(std::string &first_n) {contacts[j].SetContactFirstName(first_n); }
		std::string	GetFirstName(int id) {return (contacts[id - 1].GetContactFirstName()); }

		void	SetLastName(std::string &last_n) {contacts[j].SetContactLastName(last_n); }
		std::string	GetLastName(int id) { return (contacts[id - 1].GetContactLastName()); }

		void	SetNickname(std::string &nick_n) {contacts[j].SetContactNickname(nick_n); }
		std::string	GetNickname(int id) { return (contacts[id - 1].GetContactNickname()); }

		void	SetDarkestSecret(std::string &darkest_s) {contacts[j].SetContactDarkestSecret(darkest_s); }

		void	SetPhoneNumber(std::string &phone_n) {contacts[j].SetContactPhoneNumber(phone_n); }
};



#endif