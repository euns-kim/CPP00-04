/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:34:06 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/14 17:27:07 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSP.hpp"

bool	allNegative(Fixed c1, Fixed c2, Fixed c3)
{
	return (c1 < 0 && c2 < 0 && c3 < 0);
}

bool	allPositive(Fixed c1, Fixed c2, Fixed c3)
{
	return (c1 > 0 && c2 > 0 && c3 > 0);
}

// positive = counter-clockwise order
// negative = clockwise order
Fixed	order(const Point &p, const Point &q, const Point &r)
{
	return ((q.getX() - p.getX()) * (r.getY() - p.getY()) - \
			(q.getY() - p.getY()) * (r.getX() - p.getX()));
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed	order_abp = order(a, b, point);
	Fixed	order_bcp = order(b, c, point);
	Fixed	order_cap = order(c, a, point);

	return (allPositive(order_abp, order_bcp, order_cap) \
			|| allNegative(order_abp, order_bcp, order_cap));
}
