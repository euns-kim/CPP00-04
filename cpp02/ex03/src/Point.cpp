/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:02:48 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/14 18:54:52 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Orthodox Canonical Form */

Point::Point(void) : _x(0), _y(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Point::~Point(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

Point::Point(const Point &copy) : _x(copy.getX()), _y(copy.getY())
{
	// std::cout << "Copy constructor called" << std::endl;
	return ;
}

// Point	&Point::operator=(const Point &op)
// {
// 	_x = op.getX();
// 	_y = op.getY();
// 	// std::cout << "Copy assignation operator called" << std::endl;
// 	return (*this);
// }

/* Additional Constructors */

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	// std::cout << "Floating number constructor called" << std::endl;
	return ;
}

/* Getter */

const Fixed	Point::getX(void) const
{
	return (this->_x);
}

const Fixed	Point::getY(void) const
{
	return (this->_y);
}
