/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:37:16 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/05 15:13:50 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB( void ) {
	std::cout << "HumanB " << _name << " destructed." << std::endl;
	return ;
}

HumanB::HumanB( void ) {
	_name = "Default";
	return ;
}

HumanB::HumanB( const std::string &name ) : _name(name) {
	_weapon = nullptr;
	return ;
}

void	HumanB::setWeapon( Weapon &weapon ) {
	_weapon = &weapon;
}

void	HumanB::attack( void ) const {
	if (_weapon == nullptr)
		std::cout << "Sadly no weapon to attak ... what now?" << _name << " in despair ..." << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}