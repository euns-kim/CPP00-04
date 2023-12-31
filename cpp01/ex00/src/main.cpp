/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:01:55 by eunskim           #+#    #+#             */
/*   Updated: 2023/08/16 13:59:04 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int	main(void)
{
	Zombie*	zombie = newZombie("Glen");
	if (zombie == nullptr)
	{
		std::cerr << "Memory allocation failed." << std::endl;
		return (1);
	}
	zombie->announce();
	randomChump("Lara");
	delete zombie;
	return (0);
}