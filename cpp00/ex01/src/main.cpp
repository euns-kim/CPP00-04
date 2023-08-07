/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:39:42 by eunskim           #+#    #+#             */
/*   Updated: 2023/08/07 14:12:49 by eunskim          ###   ########.fr       */
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
		std::getline(std::cin >> std::ws, cmd_input);
		if (!cmd_input.compare("EXIT") || std::cin.eof())
			break ;
		else if (!cmd_input.compare("ADD"))
			MyAwesomePhoneBook.addContact();
		else if (cmd_input.compare("SEARCH"))
			MyAwesomePhoneBook.searchContact();
		else
			std::cerr << "Valid commands are ADD, SEARCH and EXIT" << std::endl;
	}
	return (0);
}
