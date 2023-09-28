/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:47:51 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/28 20:00:48 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	{
		ClapTrap	A("A");
		FragTrap	B("B");

		// ClapTrap	C = A;
		// FragTrap	D;
		// D = B;

		ClapTrap	C("C");
		FragTrap	D("D");

		ClapTrap	*p_A = &A;
		ClapTrap	*p_B = &B;

		p_A->attack("B");
		B.takeDamage(A.getAttackDamage());
		p_B->attack("A");
		A.takeDamage(B.getAttackDamage());
		B.highFivesGuys();
		D.attack("B");
		B.takeDamage(D.getAttackDamage());
		D.attack("B");
		B.takeDamage(D.getAttackDamage());
		B.printStats();
		D.printStats();
		B.beRepaired(10);
		B.printStats();
		D.setAttackDamage(100);
		D.printStats();
		D.attack("B");
		B.takeDamage(D.getAttackDamage());
		B.printStats();
		B.highFivesGuys();
	}
}