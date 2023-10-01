/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:49:47 by eunskim           #+#    #+#             */
/*   Updated: 2023/10/01 15:23:25 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character
{

	private:
		std::string	_name;

	public:
		Character(void);
		Character(std::string const &name);
		Character(const Character &copy);
		Character &operator=(const Character &op);
		~Character(void);

		std::string const	&getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif
