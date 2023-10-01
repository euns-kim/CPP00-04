/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:16:54 by eunskim           #+#    #+#             */
/*   Updated: 2023/10/01 19:39:01 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	private:
		AMateria	*_materiaSource[4];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		MateriaSource &operator=(const MateriaSource &op);
		~MateriaSource(void);

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const &type);

};

#endif