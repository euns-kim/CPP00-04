/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:17:41 by eunskim           #+#    #+#             */
/*   Updated: 2023/10/01 15:08:21 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{

	public:
		Ice(void);
		Ice(const Ice &copy);
		Ice &operator=(const Ice &op);
		~Ice(void);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);

};

#endif