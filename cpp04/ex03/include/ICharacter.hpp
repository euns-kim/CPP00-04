/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:37:49 by eunskim           #+#    #+#             */
/*   Updated: 2023/10/01 15:12:49 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

# define RESET	"\x1B[0m"
# define ORANGE	"\x1B[38;2;255;178;102m"

class ICharacter
{

	public:
		virtual ~ICharacter(void) {}

		virtual std::string const	&getName(void) const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter &target) = 0;

};

#endif