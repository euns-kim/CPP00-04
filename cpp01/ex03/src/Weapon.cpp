/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:57:50 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/05 15:10:59 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon( void ) {
	std::cout << "Weapon " << _type << " destructed." << std::endl;
	return ;
}

Weapon::Weapon( void ) {
	_type = "Default";
	return ;
}

Weapon::Weapon( std::string type ) : _type(type) {
	return ;
}

const std::string& Weapon::getType() const {
    return _type;
}

void	Weapon::setType( std::string type ) {
	_type = type;
}
