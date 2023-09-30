/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:31:47 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/30 17:38:13 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* Orthodox Canonical Form */

AMateria::AMateria(void) : _type("Defalt")
{
	std::cout << SKY << "[AMateria] Default constructor called" << RESET << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << SKY << "[AMateria] Type constructor called" << RESET << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << SKY << "[AMateria] Copy constructor called" << RESET << std::endl;
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &op)
{
	std::cout << SKY << "[AMateria] Copy assignment operator called" << RESET << std::endl;
	if (this != &op)
	{
		_type = op._type;
	}
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << SKY << "[AMateria] Destructor called" << RESET << std::endl;
}

std::string const	&AMateria::getType(void) const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << SKY << "[AMateria] abstract class function use called" << RESET << std::endl;
}
