/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 21:19:25 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/28 22:06:43 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>
# include <string>

# define RESET	"\x1B[0m"
# define LIME	"\x1B[38;2;204;255;204m"
# define LEMON	"\x1B[38;2;229;229;204m"

class WrongAnimal
{

	protected:
		std::string		_type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal &operator=(const WrongAnimal &op);
		virtual ~WrongAnimal(void);

		std::string		getType(void) const;
		void			makeSound(void) const;

};

#endif