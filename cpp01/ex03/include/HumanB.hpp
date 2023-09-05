/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:19:24 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/05 15:02:15 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {

	public:
		HumanB( void );
		HumanB( const std::string &name );
		~HumanB( void );
		void	setWeapon( Weapon &weapon );
		void	attack( void ) const;

	private:
		std::string	_name;
		Weapon		*_weapon;

};

#endif