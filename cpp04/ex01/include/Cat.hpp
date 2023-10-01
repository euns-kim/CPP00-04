/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:11:24 by eunskim           #+#    #+#             */
/*   Updated: 2023/10/01 15:47:51 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal, public Brain
{

	private:
		Brain	*_brain;

	public:
		Cat(void);
		Cat(const Cat &copy);
		Cat &operator=(const Cat &op);
		~Cat(void);

		void	makeSound(void) const;

};

#endif