/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:49:12 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/14 18:54:19 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{

	private:
		const Fixed	_x;
		const Fixed _y;
		Point	&operator=(const Point &op);

	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &copy);
		~Point(void);

		/* Getter */
		const Fixed	getX(void) const;
		const Fixed	getY(void) const;
	
};

#endif
