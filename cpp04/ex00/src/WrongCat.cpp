#include "WrongCat.hpp"

/* Orthodox Canonical Form */

WrongCat::WrongCat(void) : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << LEMON << "[WrongCat] Default constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << LEMON << "[WrongCat] Copy constructor called" << RESET << std::endl;
	*this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &op)
{
	std::cout << LEMON << "[WrongCat] Copy assignment operator called" << RESET << std::endl;
	if (this != &op)
	{
		_type = op._type;
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << LEMON << "[WrongCat] Destructor called" << RESET << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << LEMON << "~make wrong cat sound~" << RESET << std::endl;
}
