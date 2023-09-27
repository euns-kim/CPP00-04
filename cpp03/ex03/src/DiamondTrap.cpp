/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:47:47 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/27 21:07:47 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap(), _name("Default")
{
	std::cout << "[DiamondTrap] Default constructor called" << std::endl;

	ClapTrap::_name = "Default_clap_name";

	ScavTrap	tmp;
	_energy = tmp.getEnergy();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	std::cout << "[DiamondTrap] Name constructor called" << std::endl;

	ScavTrap	tmp;
	_energy = tmp.getEnergy();
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ScavTrap(copy), FragTrap(copy), _name(copy._name)
{
	std::cout << "[DiamondTrap] Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &op)
{
	std::cout << "[DiamondTrap] Copy assignment operator called" << std::endl;

	if (this != &op)
	{
		ScavTrap::operator=(op);
		FragTrap::operator=(op);
		_name = op._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My DiamondTrap name is " << _name << ", and my ClapTrap name is" << ClapTrap::_name << std::endl;
}
