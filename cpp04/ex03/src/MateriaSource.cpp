#include "MateriaSource.hpp"

/* Orthodox Canonical Form */

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_materiaSource[i] = NULL;
	std::cout << PINK << "[MateriaSource] Default constructor called" << RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << PINK << "[MateriaSource] Copy constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		_materiaSource[i] = NULL;
	*this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &op)
{
	std::cout << PINK << "[MateriaSource] Copy assignment operator called" << RESET << std::endl;
	if (this != &op)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materiaSource[i])
				delete _materiaSource[i];
			_materiaSource[i] = NULL;
			if (op._materiaSource[i])
				_materiaSource[i] = op._materiaSource[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materiaSource[i])
			delete _materiaSource[i];
	}
	std::cout << PINK << "[MateriaSource] Destructor called" << RESET << std::endl;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	bool	learnt = false;

	for (int i = 0; i < 4; i++)
	{
		if (_materiaSource[i] == NULL)
		{
			_materiaSource[i] = m;
			learnt = true;
			std::cout << PINK << "[MateriaSource] Materia " << _materiaSource[i]->getType() << " successfully learnt." << RESET << std::endl;
			break;
		}
	}
	if (learnt == false)
		std::cerr << GREY << "[MateriaSource] Materia source has no capacity to learn more materia." << RESET << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type == _materiaSource[i]->getType())
		{
			std::cout << PINK << "[MateriaSource] Materia " << _materiaSource[i]->getType() << " successfully created." << RESET << std::endl;
			return (_materiaSource[i]->clone());
		}
	}
	return (0);
}