/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:24:18 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/27 21:09:04 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "[FragTrap] Default constructor called" << std::endl;
	_health = 100;
	_energy = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "[FragTrap] Name constructor called" << std::endl;
	_health = 100;
	_energy = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "[FragTrap] Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &op)
{
	std::cout << "[FragTrap] Copy assignment operator called" << std::endl;
	if (this != &op)
	{
		_name = op._name;
		_health = op._health;
		_energy = op._energy;
		_attackDamage = op._attackDamage;
		ClapTrap::operator=(op);
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "[FragTrap] Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (_health)
		std::cout << "FragTrap " << _name << " request a high-five for a positive vibe." << std::endl;
	else
		std::cout << "FragTrap " << _name << " is already dead." << std::endl;
}
