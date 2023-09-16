/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:47:47 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/16 16:38:14 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Orthodox Canonical Form */

ClapTrap::ClapTrap(void) : _name("Defalt"), _health(10), _energy(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _attackDamage(0)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &op)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_name = op._name;
	_health = op._health;
	_energy = op._energy;
	_attackDamage = op._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

/* Getter and setter */

std::string	ClapTrap::getName(void) const
{
	return (_name);
}

unsigned int	ClapTrap::getHealth(void) const
{
	return (_health);
}

unsigned int	ClapTrap::getEnergy(void) const
{
	return (_energy);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setHealth(unsigned int health)
{
	_health = health;
}

void	ClapTrap::setEnergy(unsigned int energy)
{
	_energy = energy;
}

void	ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	_attackDamage = attackDamage;
}

/* Main Functions */

void	ClapTrap::attack(const std::string& target)
{
	if (_health && _energy)
	{
		_energy--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " \
		<< _attackDamage << " points of damage!" << std::endl;
	}
	else if (_health == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead ..." << std::endl;
	}	
	else if (_energy == 0)
	{
		std::cout << "No energy left ... Claptrap " << _name << " cannot attack any more ..." << std::endl;
	}	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_health == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead ..." << std::endl;
	}
	else if (_health <= amount)
	{
		std::cout << "ClapTrap " << _name << " takes " << amount \
		<< " amount of damage, losing its hit points!" << std::endl;
		_health = 0;
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " takes " << amount \
		<< " amount of damage, losing its hit points!" << std::endl;
		_health = _health - amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_health && _energy)
	{
		_energy--;
		_health += amount;
		std::cout << "ClapTrap " << _name << " is in repair, now gains " \
		<< amount << " amount of hit points back!" << std::endl;
	}
	else if (_health == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead ..." << std::endl;
	}
	else if (_energy == 0)
	{
		std::cout << "No energy left, means even no energy to heal ... what now?" << std::endl;	
	}
}

void	ClapTrap::printStats(void) const
{
	std::cout << "---------- STATS ----------" << std::endl;
	std::cout << "Name: " << _name << std::endl;
	std::cout << "Hit point: " << _health << std::endl;
	std::cout << "Energy: " << _energy << std::endl;
	std::cout << "Attack damage: " << _attackDamage << std::endl;
	std::cout << "----------------------------" << std::endl;
}
