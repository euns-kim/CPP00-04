/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:15:48 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/30 17:21:02 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

# define RESET	"\x1B[0m"
# define SKY	"\x1B[38;2;204;229;255m"
# define ICE	"\x1B[38;2;204;255;255m"
# define HERB	"\x1B[38;2;204;255;229m"

class AMateria
{

	protected:
		std::string	_type;

	public:
		
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &op);
		virtual ~AMateria(void);
		
		std::string const	&getType(void) const;
		
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);

};


#endif