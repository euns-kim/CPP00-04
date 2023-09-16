/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:49:43 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/16 16:25:10 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{

	private:
		std::string		_name;
		unsigned int	_health;
		unsigned int	_energy;
		unsigned int	_attackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &op);
		~ClapTrap(void);

		std::string 	getName(void) const;
		unsigned int	getHealth(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getAttackDamage(void) const;

		void	setName(std::string name);
		void	setHealth(unsigned int health);
		void	setEnergy(unsigned int energy);
		void	setAttackDamage(unsigned int attackDamage);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	printStats(void) const;

};

#endif