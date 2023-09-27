/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:28:33 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/27 18:52:52 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &op);
		virtual ~FragTrap(void);

		void	highFivesGuys(void);

};

#endif