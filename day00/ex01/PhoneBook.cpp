/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:37:38 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/17 17:47:43 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void	    PhoneBook::SetFirstName(std::string &first_n, int j) { contacts[j].SetContactFirstName(first_n); }
std::string	PhoneBook::GetFirstName(int id) {return (contacts[id - 1].GetContactFirstName()); }

void	    PhoneBook::SetLastName(std::string &last_n, int j) {contacts[j].SetContactLastName(last_n); }
std::string	PhoneBook::GetLastName(int id) { return (contacts[id - 1].GetContactLastName()); }

void	    PhoneBook::SetNickname(std::string &nick_n, int j) {contacts[j].SetContactNickname(nick_n); }
std::string	PhoneBook::GetNickname(int id) { return (contacts[id - 1].GetContactNickname()); }

void	    PhoneBook::SetDarkestSecret(std::string &darkest_s, int j) {contacts[j].SetContactDarkestSecret(darkest_s); }
std::string	PhoneBook::GetDarkestSecret(int id) { return (contacts[id - 1].GetContactDarkestSecret()); }

void	    PhoneBook::SetPhoneNumber(std::string &phone_n, int j) {contacts[j].SetContactPhoneNumber(phone_n); }
std::string	PhoneBook::GetPhoneNumber(int id) { return (contacts[id - 1].GetContactPhoneNumber()); }
