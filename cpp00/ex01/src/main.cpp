/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:39:42 by eunskim           #+#    #+#             */
/*   Updated: 2023/06/29 21:55:47 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
// #include "PhoneBook.hpp"

int main(void)
{
	std::string  str;

	while (true)
	{
		std::cin.clear();
		std::cout << "Enter a command: ";
		std::getline(std::cin, str);
		if (!str.compare("EXIT") || std::cin.eof())
			break ;
		// else if (!str.compare("SEARCH"))
		// 	// search contact and print
		// else if (!str.compare("ADD"))
		// 	// add contact
		else
			std::cout << "Valid commands are ADD, SEARCH and EXIT" << std::endl;
	}
	return (0);
}
