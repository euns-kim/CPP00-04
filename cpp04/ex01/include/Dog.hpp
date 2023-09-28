/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:11:24 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/28 21:57:38 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{

	public:
		Dog(void);
		Dog(const Dog &copy);
		Dog &operator=(const Dog &op);
		~Dog(void);

		void	makeSound(void) const;

};

#endif