/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:47:51 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/28 17:14:04 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	{
		DiamondTrap	Cat("Cat");
		DiamondTrap	Cat2("Cat2");
		DiamondTrap	Cat3;
		Cat3 = Cat2;
		DiamondTrap Cat4(Cat);
	
		Cat.printStats();
		Cat.attack("Cat2");
		Cat2.takeDamage(Cat.getAttackDamage());
		Cat2.printStats();
		Cat.highFivesGuys();

		Cat3.printStats();
		Cat4.printStats();

		Cat.whoAmI();
		Cat2.whoAmI();
		Cat3.whoAmI();
		Cat4.whoAmI();
	}
}