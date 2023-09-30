/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:38:02 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/30 17:38:04 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* Orthodox Canonical Form */

Ice::Ice(void) : AMateria("ice")
{
	std::cout << ICE << "[Ice] Default constructor called" << RESET << std::endl;
}

Ice::Ice(const Ice &copy)
{
	std::cout << ICE << "[Ice] Copy constructor called" << RESET << std::endl;
	*this = copy;
}

Ice &Ice::operator=(const Ice &op)
{
	std::cout << ICE << "[Ice] Copy assignment operator called" << RESET << std::endl;
	if (this != &op)
	{
		_type = op._type;
	}
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << ICE << "[Ice] Destructor called" << RESET << std::endl;
}

Ice	*Ice::clone(void) const
{
	return (new Ice);
}

void	Ice::use(ICharacter &target)
{
	std::cout << ICE << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}
