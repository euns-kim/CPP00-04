/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:45:04 by eunskim           #+#    #+#             */
/*   Updated: 2023/10/01 15:46:39 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Orthodox Canonical Form */

Dog::Dog(void) : Animal(), _brain(new Brain)
{
	_type = "Dog";
	std::cout << PEACH << "[Dog] Default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy), _brain(new Brain(*copy._brain))
{
	std::cout << PEACH << "[Dog] Copy constructor called" << RESET << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &op)
{
	std::cout << PEACH << "[Dog] Copy assignment operator called" << RESET << std::endl;
	if (this != &op)
	{
		_type = op._type;
		Brain::operator=(op);
		Animal::operator=(op);
	}
	return (*this);
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << PEACH << "[Dog] Destructor called" << RESET << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << PEACH << "~meong-meong~" << RESET << std::endl;
}
