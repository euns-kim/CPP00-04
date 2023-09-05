/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:47:29 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/05 14:09:24 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

	public:
		Zombie( void );
		~Zombie( void );
		void	setName( std::string name );
		void	announce( void );

	private:
		std::string	_name;

};

Zombie*    zombieHorde( int N, std::string name );

#endif
