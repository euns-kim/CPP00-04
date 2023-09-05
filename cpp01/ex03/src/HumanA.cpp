/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:37:19 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/05 15:08:02 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA( void ) {
	std::cout << "HumanA " << _name << " destructed." << std::endl;
	return ;
}

HumanA::HumanA( const std::string &name, Weapon &weapon ) : _name(name), _weapon(weapon) {
	return ;
}

void	HumanA::attack( void ) const {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
