/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:21:10 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/28 21:57:06 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Orthodox Canonical Form */

Animal::Animal(void) : _type("Defalt")
{
	std::cout << PINK << "[Animal] Default constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << PINK << "[Animal] Copy constructor called" << RESET << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &op)
{
	std::cout << PINK << "[Animal] Copy assignment operator called" << RESET << std::endl;
	if (this != &op)
	{
		_type = op._type;
	}
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << PINK << "[Animal] Destructor called" << RESET << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void) const
{
	std::cout << PINK << "~make animal sound~" << RESET << std::endl;
}
