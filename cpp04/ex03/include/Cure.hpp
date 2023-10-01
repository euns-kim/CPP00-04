/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:30:45 by eunskim           #+#    #+#             */
/*   Updated: 2023/10/01 16:58:20 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{

	public:
		Cure(void);
		Cure(const Cure &copy);
		Cure &operator=(const Cure &op);
		~Cure(void);

		Cure	*clone(void) const;
		void	use(ICharacter &target);

};

#endif