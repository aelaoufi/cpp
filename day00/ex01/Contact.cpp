/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaoufi <aelaoufi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:37:53 by aelaoufi          #+#    #+#             */
/*   Updated: 2023/02/16 18:37:56 by aelaoufi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	Contact::SetContactFirstName(std::string &first_n) { first_name = first_n;}
std::string	Contact::GetContactFirstName() { return (first_name); }

void	Contact::SetContactLastName(std::string &last_n) {last_name = last_n; }
std::string	Contact::GetContactLastName() { return (last_name); }

void	Contact::SetContactNickname(std::string &nick_n) {nickname = nick_n; }
std::string	Contact::GetContactNickname() { return (nickname); }

void	Contact::SetContactDarkestSecret(std::string &darkest_s) {darkest_secret = darkest_s; }
std::string	Contact::GetContactDarkestSecret() { return (darkest_secret); }

void	Contact::SetContactPhoneNumber(std::string &phone_n) {phone_number = phone_n; }
std::string	Contact::GetContactPhoneNumber() { return (phone_number); }