/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:16:57 by eunskim           #+#    #+#             */
/*   Updated: 2023/06/29 21:48:50 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void): _firstName("Default"), _lastName("Default"), \
_nickname("Default"), _phoneNumber("Default"), _darkestSecret("Default") {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::setContact(enum Info info, const std::string& str)
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

std::string	Contact::getContact(enum Info info)
{
	if (info == FIRST_NAME)
		return (_firstName);
	else if (info == LAST_NAME)
		return (_lastName);
	else if (info == NICKNAME)
		return (_nickname);
	else if (info == PHONE_NUMBER)
		return (_phoneNumber);
	else if (info == DARKEST_SECRET)
		return (_darkestSecret);
}