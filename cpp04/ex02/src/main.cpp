/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:20:14 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/29 15:20:09 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int	main(void)
{
	{
		// const Animal* meta = new Animal();

		const Animal* j = new Dog();
		const Animal* i = new Cat();

		// std::cout << PINK << meta->getType() << RESET << std::endl;
		std::cout << PEACH << j->getType() << RESET << std::endl;
		std::cout << ORANGE << i->getType() << RESET << std::endl;

		// meta->makeSound();
		j->makeSound();
		i->makeSound();

		// delete meta;
		delete j;
		delete i;
		// system("leaks Brain");
	}
}