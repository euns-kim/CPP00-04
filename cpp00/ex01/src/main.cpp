/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:39:42 by eunskim           #+#    #+#             */
/*   Updated: 2023/08/08 21:58:00 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	MyAwesomePhoneBook;
	std::string	cmd_input;

	while (true)
	{
		std::cin.clear();
		std::cout << "Enter a command: ";
		std::cin >> std::ws;
		std::getline(std::cin, cmd_input);
		if (std::cin.eof() || cmd_input == "EXIT")
			return (0);
		else if (cmd_input == "ADD")
		{
			if (MyAwesomePhoneBook.addContact())
				std::cerr << "Failed to add a new contact." << std::endl;
		}
		else if (cmd_input == "SEARCH")
			MyAwesomePhoneBook.searchContact();
		else
			std::cerr << "Valid commands are ADD, SEARCH and EXIT." << std::endl;
	}
	return (0);
}
