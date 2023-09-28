/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:48:54 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/28 21:57:21 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* Orthodox Canonical Form */

WrongAnimal::WrongAnimal(void) : _type("Defalt")
{
	std::cout << LIME << "[WrongAnimal] Default constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << LIME << "[WrongAnimal] Copy constructor called" << RESET << std::endl;
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &op)
{
	std::cout << LIME << "[WrongAnimal] Copy assignment operator called" << RESET << std::endl;
	if (this != &op)
	{
		_type = op._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << LIME << "[WrongAnimal] Destructor called" << RESET << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << LIME << "~make wrong animal sound~" << RESET << std::endl;
}
