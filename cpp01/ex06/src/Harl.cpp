/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:20:39 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/07 16:37:31 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::~Harl( void ) {
	std::cout << "Harl destructed." << std::endl;
	return ;
}

Harl::Harl( void ) {
	std::cout << "Harl constructed." << std::endl;
	return ;
}

void	Harl::debug( void )
{
	std::cout << "I asked for no onions in my burger, and they still put them in." << std::endl;
}

void	Harl::info( void )
{
	std::cout << "The Wi-Fi here is so slow; it's impossible to get any work done." << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I cannot believe how long I had to wait in line!" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This restaurant service is terrible. I've been waiting for my food for ages." << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string	levelStr[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	memFunc		levelFunc[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	int			levelIdx = 4;
	for (int i = 0; i < 4; i++)
	{
		if (level == levelStr[i])
		{
			levelIdx = i;
			break;
		}
	}
	
	switch (levelIdx)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			callMemberFunction(*this, levelFunc[0])();
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			callMemberFunction(*this, levelFunc[1])();
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			callMemberFunction(*this, levelFunc[2])();
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			callMemberFunction(*this, levelFunc[3])();
			std::cout << std::endl;
			break;
		default:
			std::cout << "I can't find anything ..." << std::endl;
			std::cout << std::endl;
			break;
	}
}