/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:20:14 by eunskim           #+#    #+#             */
/*   Updated: 2023/10/01 15:58:20 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int	main(void)
{
	// {
	// 	const Animal* meta = new Animal();

	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();

	// 	std::cout << PINK << meta->getType() << RESET << std::endl;
	// 	std::cout << PEACH << j->getType() << RESET << std::endl;
	// 	std::cout << ORANGE << i->getType() << RESET << std::endl;

	// 	meta->makeSound();
	// 	j->makeSound();
	// 	i->makeSound();

	// 	delete meta;
	// 	delete j;
	// 	delete i;
	// 	// system("leaks Brain");
	// }
	// {
	// 	Dog	Bamtol;

	// 	Bamtol.setIdea(0, "xoxo \u2764");
	// 	Bamtol.setIdea(-1, "fooood \u2764");
	// 	Bamtol.setIdea(100, "walk? \u2764");
	// 	Bamtol.setIdea(1, "home sweet home \u2764");
	// 	Bamtol.printIdea(0);
	// 	Bamtol.printIdea(1);
	//  	Bamtol.printIdea(2);
	// 	Bamtol.printIdea(200);

	// 	Dog	Bamtol2(Bamtol);
	// 	// Dog Bamtol2;
	// 	// Bamtol2 = Bamtol;

	// 	Bamtol2.printIdea(0);
	// 	Bamtol2.printIdea(1);
	//  	Bamtol2.printIdea(2);
	// 	Bamtol2.printIdea(200);
	// 	// system("leaks Brain");
	// }
	// {
	// 	Cat	Dami;

	// 	Dami.setIdea(0, "xoxo \u2764");
	// 	Dami.setIdea(1, "play~ \u2764");
	// 	Dami.setIdea(12, "alone time \u2764");
	// 	Dami.setIdea(23, "home sweet home \u2764");
	// 	Dami.printIdea(0);
	// 	Dami.printIdea(1);
	// 	Dami.printIdea(12);
	//  	Dami.printIdea(23);

	// 	// Cat	Dami2(Dami);
	// 	Cat	Dami2;
	// 	Dami2 = Dami;

	// 	Dami2.printIdea(0);
	// 	Dami2.printIdea(1);
	//  	Dami2.printIdea(12);
	// 	Dami2.printIdea(23);
	// 	// system("leaks Brain");
	// }
	{
		Animal	*farm[10];
		for (int i = 0; i < 5; i++)
			farm[i] = new Dog();
		for (int i = 5; i < 10; i++)
			farm[i] = new Cat();
		for (int i = 0; i < 10; i++)
			delete farm[i];

		Dog basic;
		{
			Dog tmp = basic;
		}
		// system("leaks Brain");
	}
}