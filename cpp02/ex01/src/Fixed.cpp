/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:31:58 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/17 15:55:44 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Orthodox Canonical Form */

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point_value = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point_value = copy.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &op)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point_value = op.getRawBits();
	return (*this);
}

/* Additional Constructors */

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_value = roundf(value * (1 << fractional_bits));
}

/* Getter and setter */

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point_value = raw;
}

/* Extended getters */

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixed_point_value) / (1 << fractional_bits));
}

int		Fixed::toInt(void) const
{
	return (this->fixed_point_value >> fractional_bits);
}

/* Output operator overload */

std::ostream	&operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}
