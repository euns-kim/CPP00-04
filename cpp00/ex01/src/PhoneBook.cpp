/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:17:01 by eunskim           #+#    #+#             */
/*   Updated: 2023/08/08 22:20:19 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _contactNext(0), _contactNum(0) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

unsigned int	PhoneBook::getIndexFromUser(void)
{
	std::string		input;
	unsigned int	idx;
	unsigned int	cnt;

	if (_contactNum > 8)
		cnt = 8;
	else
		cnt = _contactNum;
	while (true)
	{
		std::cin.clear();
		std::cout << "Enter the index of the contact you want to look up: ";
		std::cin >> std::ws;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(1);
		if (input.empty() || !std::isdigit(input[0]))
			std::cerr << "Expected input is a single digit." << std::endl;
		else
		{
			idx = std::stoi(input);
			if (idx >= 0 && idx < cnt)
				break ;
			else
			{
				if (_contactNum == 1)
					std::cerr << "Valid index is 0." << std::endl;
				else if (_contactNum >= 8)
					std::cerr << "Valid indices are integers between 0 and 7." << std::endl;
				else
					std::cerr << "Valid indices are integers between 0 and " \
					<< ((_contactNum % _contactMax) - 1) << "." << std::endl;
			}
		}
	}
	return (idx);
}

void	PhoneBook::displayPhonebook(void) const
{
	unsigned int i = 0;
	unsigned int cnt = 0;

	std::cout << "|" << std::right << std::setw(10) << "Index" << "|" \
	<< std::right << std::setw(10) << "First Name" << "|" \
	<< std::right << std::setw(10) << "Last Name" << "|" \
	<< std::right << std::setw(10) << "Nickame" << "|" << std::endl;

	if (_contactNum >= 8)
		cnt = 8;
	else
		cnt = _contactNum;	
	while (i < cnt)
	{
		std::cout << "|";
		std::cout << std::right << std::setw(10) << i << "|";
		_contacts[i].printContactAbbrev();
		i++;
	}
}

int PhoneBook::searchContact(void)
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
	if (input[0] == '+')
		i = 1;
	while (i < input.length())
	{
		if (!std::isdigit(input[i]))
		{
			if (input[i] != ' ' && input[i] != '-')
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

	if (std::cin.eof())
		exit(1);
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
		case FIRST_NAME:
			std::cout << "Enter your firsr name: ";
			break ;
		case LAST_NAME:
			std::cout << "Enter your last name: ";
			break ;
		case NICKNAME:
			std::cout << "Enter your nickname: ";
			break ;
		case PHONE_NUMBER:
			std::cout << "Enter your phone number: ";
			break ;
		case DARKEST_SECRET:
			std::cout << "What is your darkest secret?: ";
			break ;
		case END:
			break ;
	}
	std::getline(std::cin >> std::ws, input);
	return ;
}

int	PhoneBook::addContact()
{
	Contact		contact;
	std::string	input;

	for (int i = static_cast<int> (FIRST_NAME); i < static_cast<int> (END); i++)
	{
		takeUserInput(static_cast<e_Info> (i), input);
		if (checkValidityUserInput(static_cast<e_Info> (i), input) == false)
			return (1);
		contact.setContact(static_cast<e_Info> (i), input);
	}
	_contacts[_contactNext] = contact;
	_contactNum += 1;
	_contactNext = _contactNum % _contactMax;
	return (0);
}
