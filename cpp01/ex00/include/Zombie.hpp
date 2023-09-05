/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 16:50:41 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/05 14:09:18 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void );

	private:
		std::string	_name;

};

Zombie*	newZombie( std::string name );
void	randomChump(std::string name );

#endif
