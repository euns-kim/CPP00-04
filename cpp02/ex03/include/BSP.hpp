/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSP.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:46:19 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/14 17:26:46 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_HPP
# define BSP_HPP

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);
Fixed	order(const Point &p, const Point &q, const Point &r);
bool	allPositive(Fixed c1, Fixed c2, Fixed c3);
bool	allNegative(Fixed c1, Fixed c2, Fixed c3);

#endif