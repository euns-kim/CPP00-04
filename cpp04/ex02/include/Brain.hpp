/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:18:12 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/29 13:34:47 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

# define RESET	"\x1B[0m"
# define VIOLET	"\x1B[38;2;204;204;255m"
# define GREY	"\x1B[38;2;224;224;224m"

class Brain
{

	protected:
		std::string	_ideas[100];

	public:
		Brain(void);
		Brain(const Brain &copy);
		Brain &operator=(const Brain &op);
		virtual ~Brain(void);

		void	setIdea(int idx, std::string idea);
		void	printIdea(int idx) const;

};

#endif