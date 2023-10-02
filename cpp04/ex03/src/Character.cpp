/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:31:16 by eunskim           #+#    #+#             */
/*   Updated: 2023/10/02 16:21:07 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Orthodox Canonical Form */

Character::Character(void) : _name("Defalt")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << ORANGE << "[Character] Default constructor called" << RESET << std::endl;
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << ORANGE << "[Character] Name constructor called" << RESET << std::endl;
}

Character::Character(const Character &copy)
{
	std::cout << ORANGE << "[Character] Copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	*this = copy;
}

Character &Character::operator=(const Character &op)
{
	std::cout << ORANGE << "[Character] Copy assignment operator called" << RESET << std::endl;
	if (this != &op)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = NULL;
			if (op._inventory[i])
				_inventory[i] = op._inventory[i]->clone();
		}
		_name = op._name;
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	std::cout << ORANGE << "[Character] Destructor called" << RESET << std::endl;
}

std::string const	&Character::getName(void) const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	bool	equipped = false;

	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			equipped = true;
			std::cout << ORANGE << "[Character] Materia " << _inventory[i]->getType() << " successfully equipped." << RESET << std::endl;
			break;
		}
	}
	if (equipped == false)
		std::cerr << GREY << "[Character] Inventory of " << _name << " is now full." << RESET << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cerr << GREY << "[Character::unequip] Given index is out of range." << RESET << std::endl;
		return ;
	}
	if (_inventory[idx])
	{
		std::cout << ORANGE << "[Character] Materia " << _inventory[idx]->getType() << " successfully unequipped." << RESET << std::endl;
		_inventory[idx] = NULL;
	}
	else
		std::cerr << GREY << "[Character] You tried to unequip an empty inventory." << RESET << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cerr << GREY << "[Character::use] Given index is out of range." << RESET << std::endl;
		return ;
	}
	if (_inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cerr << GREY << "[Character] No materia found in the inventory." << RESET << std::endl;
}
