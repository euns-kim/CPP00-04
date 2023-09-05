/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:02:16 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/05 14:23:13 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {

	public:
		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );
		const std::string&	getType( void ) const;
		void				setType( std::string type );

	private:
		std::string	_type;

};

#endif
