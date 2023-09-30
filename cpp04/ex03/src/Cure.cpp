/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:30:32 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/30 17:30:40 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* Orthodox Canonical Form */

Cure::Cure(void) : AMateria("cure")
{
	std::cout << HERB << "[Cure] Default constructor called" << RESET << std::endl;
}

Cure::Cure(const Cure &copy)
{
	std::cout << HERB << "[Cure] Copy constructor called" << RESET << std::endl;
	*this = copy;
}

Cure &Cure::operator=(const Cure &op)
{
	std::cout << HERB << "[Cure] Copy assignment operator called" << RESET << std::endl;
	if (this != &op)
	{
		_type = op._type;
	}
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << HERB << "[Cure] Destructor called" << RESET << std::endl;
}

Cure	*Cure::clone(void) const
{
	return (new Cure);
}

void	Cure::use(ICharacter &target)
{
	std::cout << HERB << "* heals " << target.getName() << "\'s wounds *" << RESET << std::endl;
}
