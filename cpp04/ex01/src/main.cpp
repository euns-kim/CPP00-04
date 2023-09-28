/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:20:14 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/28 22:24:15 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int	main(void)
{
	{
		const Animal* meta = new Animal();

		const Animal* j = new Dog();
		const Animal* i = new Cat();

		// do something

		delete meta;
		delete j;
		delete i;
	}
}