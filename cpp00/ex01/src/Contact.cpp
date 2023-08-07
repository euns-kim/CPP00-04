/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:16:57 by eunskim           #+#    #+#             */
/*   Updated: 2023/08/07 16:49:31 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) : _firstName(""), _lastName(""), \
_nickname(""), _phoneNumber(""), _darkestSecret("") {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::printContactFull(void) const
{
	std::cout << "First name:     " << _firstName << std::endl;
	std::cout << "Last name:      " << _lastName << std::endl;
	std::cout << "Nickname:       " << _nickName << std::endl;
	std::cout << "Phone number:   " << _phoneNumber << std::endl;
	std::cout << "Darkest secret: " << _darkestSecret << std::endl;
}

std::string	Contact::returnAbbreviatedStr(std::string str) const
{
	if (str.length > 10)
		return (str.substring(0, 9) + ".");
	else
		return (str);
}

void	Contact::printContactAbbrev(void) const
{
	std::cout << std::right << std::setw(10) << returnAbbreviatedStr(_firstName) << "|" \
	<< std::right << std::setw(10) << returnAbbreviatedStr(_lasttName) << "|" \
	<< std::right << std::setw(10) << returnAbbreviatedStr(_nickname) << std::endl;
}

void	Contact::setContact(e_Info info, const std::string& str)
{
	if (info == FIRST_NAME)
		_firstName = str;
	else if (info == LAST_NAME)
		_lastName = str;
	else if (info == NICKNAME)
		_nickname = str;
	else if (info == PHONE_NUMBER)
		_phoneNumber = str;
	else if (info == DARKEST_SECRET)
		_darkestSecret = str;
}
