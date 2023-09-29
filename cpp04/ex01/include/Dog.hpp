/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:11:24 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/29 14:07:05 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal, virtual public Brain
{

	private:
		Brain	*_brain;

	public:
		Dog(void);
		Dog(const Dog &copy);
		Dog &operator=(const Dog &op);
		~Dog(void);

		void	makeSound(void) const;

};

#endif