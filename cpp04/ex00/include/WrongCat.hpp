/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:19:11 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/28 21:57:47 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:
		WrongCat(void);
		WrongCat(const WrongCat &copy);
		WrongCat &operator=(const WrongCat &op);
		~WrongCat(void);

		void	makeSound(void) const;

};

#endif