/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:40:04 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/28 21:57:12 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Orthodox Canonical Form */

Cat::Cat(void) : Animal()
{
	_type = "Cat";
	std::cout << ORANGE << "[Cat] Default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << ORANGE << "[Cat] Copy constructor called" << RESET << std::endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &op)
{
	std::cout << ORANGE << "[Cat] Copy assignment operator called" << RESET << std::endl;
	if (this != &op)
	{
		_type = op._type;
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << ORANGE << "[Cat] Destructor called" << RESET << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << ORANGE << "~yaong~" << RESET << std::endl;
}
