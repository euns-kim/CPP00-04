/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:47:51 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/16 16:43:20 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	{
		ClapTrap	Jack;
		Jack.printStats();
		Jack.setName("Jack");
		Jack.setAttackDamage(2);
		Jack.printStats();

		ClapTrap	Nancy("Nancy");
		// cf) ClapTrap	Nancy(ClapTrap("Nancy"));
		Nancy.printStats();

		ClapTrap	Third;
		Third = Jack;
		// cf) ClapTrap	Third = Jack;
		Third.printStats();

		ClapTrap	Jim("Jim");
		// cf) ClapTrap	Jim = ClapTrap("Jim");
		Jim.printStats();
	
		Jack.attack("Jim");
		Jim.takeDamage(Jack.getAttackDamage());
		Jack.attack("Jim");
		Jim.takeDamage(Jack.getAttackDamage());
		Jim.attack("Jack");
		Jack.takeDamage(Jim.getAttackDamage());
		Jim.beRepaired(1);
		Jim.beRepaired(1);
		Jack.attack("Jim");
		Jim.takeDamage(Jack.getAttackDamage());
		Jim.attack("Jack");
		Jack.takeDamage(Jim.getAttackDamage());
		Jack.attack("Jim");
		Jim.takeDamage(Jack.getAttackDamage());
		Jim.attack("Jack");
		Jack.takeDamage(Jim.getAttackDamage());
		Jim.printStats();
		Jack.printStats();
		Jim.attack("Mosquito");
		Jim.attack("Mosquito");
		Jim.attack("Mosquito");
		Jack.beRepaired(2);
		Jack.attack("Jim");
		Jim.takeDamage(Jack.getAttackDamage());
		Jack.attack("Jim");
		Jim.takeDamage(Jack.getAttackDamage());
		Jack.attack("Jim");
		Jim.takeDamage(Jack.getAttackDamage());
		Jack.attack("Jim");
		Jim.takeDamage(Jack.getAttackDamage());
		Jim.beRepaired(10);
		Jim.attack("Jack");
		Jim.printStats();
		Jack.printStats();
	}
}