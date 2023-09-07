/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:19:14 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/06 18:18:53 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {

	public:
		HumanA( const std::string &name, Weapon &weapon );
		~HumanA( void );
		void	attack( void ) const;

	private:
		std::string	_name;
		Weapon		&_weapon;

};

#endif