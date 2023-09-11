/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:00:28 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/11 16:40:13 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{

	private:
		int					value;
		static const int	fractional_bits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed	&operator=(const Fixed &op);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};

#endif
