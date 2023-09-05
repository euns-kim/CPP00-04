/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:46:44 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/04 19:17:21 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int	main(void)
{
	Zombie	*myZombies = zombieHorde(10, "Will");
	for (int i = 0; i < 10; i++)
	{
		myZombies[i].announce();
	}
	delete[] myZombies;
	return (0);
}