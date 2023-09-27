/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:24:18 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/27 16:29:35 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "[ScavTrap] Default constructor called" << std::endl;
	_health = 100;
	_energy = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[ScavTrap] Name constructor called" << std::endl;
	_health = 100;
	_energy = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "[ScavTrap] Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &op)
{
	std::cout << "[ScavTrap] Copy assignment operator called" << std::endl;
	_name = op._name;
	_health = op._health;
	_energy = op._energy;
	_attackDamage = op._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[ScavTrap] Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_health && _energy)
	{
		_energy--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " \
		<< _attackDamage << " points of damage!" << std::endl;
	}
	else if (_health == 0)
	{
		std::cout << "ScavTrap " << _name << " is already dead ..." << std::endl;
	}	
	else if (_energy == 0)
	{
		std::cout << "No energy left ... ScavTrap " << _name << " cannot attack any more ..." << std::endl;
	}	
}

void	ScavTrap::guardGate(void)
{
	if (_health)
		std::cout << "ScavTrap " << _name << " is now in gate keeper mode ..." << std::endl;
	else
		std::cout << "ScavTrap " << _name << " is already dead." << std::endl;
}
