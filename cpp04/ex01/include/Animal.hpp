/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:11:24 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/30 16:27:20 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

# define RESET	"\x1B[0m"
# define PINK	"\x1B[38;2;255;204;229m"
# define ORANGE	"\x1B[38;2;255;178;102m"
# define PEACH	"\x1B[38;2;255;153;153m"

class Animal
{

	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &op);
		virtual ~Animal(void);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;

};

#endif