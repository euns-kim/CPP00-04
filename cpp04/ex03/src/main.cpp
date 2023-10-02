/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:45:06 by eunskim           #+#    #+#             */
/*   Updated: 2023/10/02 16:16:52 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main()
{
	// {
	// 	IMateriaSource	*src = new MateriaSource();
	// 	src->learnMateria(new Ice());
	// 	src->learnMateria(new Cure());

	// 	ICharacter	*me = new Character("me");

	// 	AMateria*	tmp;
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	delete tmp;
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);
	// 	delete tmp;

	// 	ICharacter	*bob = new Character("bob");

	// 	me->use(0, *bob);
	// 	me->use(1, *bob);
	// 	me->use(2, *bob);
	// 	me->use(3, *bob);

	// 	delete bob;
	// 	delete me;
	// 	delete src;
		
	// 	// system("leaks Interfaces");
	// 	return 0;
	// }
	{
		IMateriaSource	*src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		AMateria	*floor[4];
		floor[0] = src->createMateria("ice");
		floor[1] = src->createMateria("cure");
		floor[2] = src->createMateria("ice");
		floor[3] = src->createMateria("cure");

		Character	*me = new Character("me");
		ICharacter	*Ime = me;

		Ime->equip(floor[0]);
		Ime->equip(floor[1]);
		Ime->equip(floor[2]);
		Ime->equip(floor[3]);

		Ime->unequip(0);
		delete floor[0];
		Ime->unequip(3);
		delete floor[3];
		Ime->unequip(4);

		ICharacter	*bob = new Character("bob");

		Ime->use(0, *bob);
		Ime->use(1, *bob);
		Ime->use(2, *bob);
		Ime->use(3, *bob);

		ICharacter	*copy_me = new Character(*me);
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);

		delete bob;
		delete copy_me;
		delete me;
		delete src;
		
		system("leaks Interfaces");
		return 0;
	}
	// {
	// 	Character	bob("Bob");

	// 	Character	me(bob);

	// 	Character	you;
	// 	you = bob;
	// }
	// {
	// 	MateriaSource	src;

	// 	MateriaSource	src2(src);

	// 	MateriaSource	src3;
	// 	src3 = src;
	// }
}
