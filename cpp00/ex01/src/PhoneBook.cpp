/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:17:01 by eunskim           #+#    #+#             */
/*   Updated: 2023/08/07 16:50:58 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _contactNext(0), _contactNum(0) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

static int	getIndexFromUser(void)
{
	int	idx;

	while (true)
	{
		std::cin.clear();
		std::cout << "Enter the index of the contact you want to look up: ";
		std::cin >> idx;
		if (idx >= 0 && idx <= 7)
			break;
		else
			std::cout << "Valid indices are integers between 0 and 7" << std::endl;
	}
	return (idx);
}

void	displayPhonebook(void) const
{
	int i = 0;

	std::cout << std::right << std::setw(10) << "Index" << "|" \
	<< std::right << std::setw(10) << "First Name" << "|" \
	<< std::right << std::setw(10) << "Last Name" << "|" \
	<< std::right << std::setw(10) << "Nickame" << "|" << std::endl;

	while (i < _contactNum)
	{
		std::cout << std::right << std::setw(10) << i << "|";
		_contacts[i].printContactAbbrev();
	}
}

int PhoneBook::searchContact(void) const
{
	int	idx;

	if (_contactNum == 0)
	{
		std::cout << "No contact to display." << std::endl;
		return (0);
	}
	displayPhonebook();
	idx = getIndexFromUser();
	_contacts[idx].printContactFull();
	return (0);
}

static bool	isValidString(std::string input)
{
	if (input.empty())
	{
		std::cerr << "Empty input." << std::endl;
		return (false);
	}
	return (true);
}

static bool	isValidPhoneNumber(std::string input)
{
	unsigned int i = 0;

	if (input.empty())
	{
		std::cerr << "Empty input." << std::endl;
		return (false);
	}
	if (input[0] = '+')
		i = 1;
	while (i < input.length)
	{
		if (!std::isdigit(input[i]))
		{
			if (input[i] != ' ')
			{
				std::cerr << "Invalid phone number." << std::endl;
				return (false);
			}
		}
		i++;
	}
	return (true);
}

static bool checkValidityUserInput(e_Info info, std::string input)
{
	bool	isValid;

	if (info == PHONE_NUMBER)
		isValid = isValidPhoneNumber(input);
	else
		isValid = isValidString(input);
	return (isValid);
}

static void	takeUserInput(e_Info info, std::string& input)
{
	switch (info)
	{
		case e_Info::FIRST_NAME:
			std::cout << "Enter your firsr name: ";
			break;
		case e_Info::LAST_NAME:
			std::cout << "Enter your last name: ";
			break;
		case e_Info::NICKNAME:
			std::cout << "Enter your nickname: ";
			break;
		case e_Info::PHONE_NUMBER:
			std::cout << "Enter your phone number: ";
			break;
		case e_Info::DARKEST_SECRET:
			std::cout << "What is your darkest secret?: ";
			break;
	}
	std::getline(std::cin >> std::ws, input);
	return ;
}

int	PhoneBook::addContact()
{
	Contact		contact;
	std::string	input;

	for (int i = static_cast<int> (e_Info::FIRST_NAME); i < static_cast<int> (e_Info::END); i++)
	{
		takeUserInput(static_cast<e_Info> (i), input);
		if (checkValidityUserInput(input) == false)
			return (1);
		contact.setContact(static_cast<e_Info> (i), input);
	}
	_contacts[contactNext] = contact;
	_contactNum += 1;
	_contactNext = _contactNum % _contactMax;
	return (0);
}
