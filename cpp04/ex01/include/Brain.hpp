/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 22:18:12 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/28 22:25:22 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define RESET	"\x1B[0m"
# define VIOLET	"\x1B[38;2;204;204;255m"

class Brain
{

	protected:

	public:
		Brain(void);
		Brain(const Brain &copy);
		Brain &operator=(const Brain &op);
		virtual ~Brain(void);

};

#endif