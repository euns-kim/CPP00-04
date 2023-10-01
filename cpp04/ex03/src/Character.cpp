#include "Character.hpp"

/* Orthodox Canonical Form */

Character::Character(void) : _name("Defalt")
{
	std::cout << ORANGE << "[Character] Default constructor called" << RESET << std::endl;
}

Character::Character(std::string const &name) : _name(name)
{
	std::cout << ORANGE << "[Character] Name constructor called" << RESET << std::endl;
}

Character::Character(const Character &copy)
{
	std::cout << ORANGE << "[Character] Copy constructor called" << RESET << std::endl;
	*this = copy;
}

Character &Character::operator=(const Character &op)
{
	std::cout << ORANGE << "[Character] Copy assignment operator called" << RESET << std::endl;
	if (this != &op)
	{
		_name = op._name;
	}
	return (*this);
}

Character::~Character(void)
{
	std::cout << ORANGE << "[Character] Destructor called" << RESET << std::endl;
}

std::string const	&Character::getName(void) const
{
	return (_name);
}

void				equip(AMateria* m);
void				unequip(int idx);
void				use(int idx, ICharacter &target);