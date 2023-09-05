/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:30:34 by eunskim           #+#    #+#             */
/*   Updated: 2023/08/16 13:43:40 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << _name << " destructed." << std::endl;
	return ;
}

Zombie::Zombie( std::string name ) : _name(name) {
	return ;
}

Zombie::Zombie( void ) {
	return ;
}

void	Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
