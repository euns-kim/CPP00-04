/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunskim <eunskim@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:31:58 by eunskim           #+#    #+#             */
/*   Updated: 2023/09/16 16:19:25 by eunskim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Orthodox Canonical Form */

Fixed::Fixed(void)
{
	// std::cout << "Default constructor called" << std::endl;
	this->fixed_point_value = 0;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->fixed_point_value = copy.getRawBits();
}

Fixed	&Fixed::operator=(const Fixed &op)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point_value = op.getRawBits();
	return (*this);
}

/* Additional Constructors */

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = value << fractional_bits;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->fixed_point_value = roundf(value * (1 << fractional_bits));
}

/* Getter and setter */

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point_value = raw;
}

/* Extended getters */

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixed_point_value) / static_cast<float>(1 << fractional_bits));
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

/* Comparison operator overload */

bool	Fixed::operator>(const Fixed &fixed) const
{
	return (this->fixed_point_value > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return (this->fixed_point_value < fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return (this->fixed_point_value >= fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return (this->fixed_point_value <= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return (this->fixed_point_value == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return !(*this == fixed);
}

/* Arithmetic operator overload */

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	Fixed	tmp;

	tmp.setRawBits(this->fixed_point_value + fixed.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	Fixed	tmp;

	tmp.setRawBits(this->fixed_point_value - fixed.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	Fixed	tmp;

	tmp.setRawBits(static_cast<int>((static_cast<long>(this->fixed_point_value * fixed.getRawBits())) / static_cast<long>(1 << fractional_bits)));
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	Fixed	tmp;

	tmp.setRawBits(static_cast<int>((static_cast<long>(this->fixed_point_value * (1 << fractional_bits))) / static_cast<long>(fixed.getRawBits())));
	return (tmp);
}

/* Increment/decrement operator */

Fixed &Fixed::operator++(void)
{
	this->fixed_point_value++;

	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++(*this);

	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	this->fixed_point_value--;

	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--(*this);

	return (tmp);
}

/* Min & max */

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
