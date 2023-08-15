/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:01:55 by eunskim           #+#    #+#             */
/*   Updated: 2023/08/15 17:39:49 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int	main(void)
{
	Zombie*	zombie = newZombie("Glen");
	zombie->announce();
	randomChump("Lara");
	delete zombie;
	return (0);
}