/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 03:00:24 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 08:53:54 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_rawBits = 0;
}

Fixed::Fixed(const Fixed &fixedp)
{
	*this = fixedp;
}

Fixed::Fixed(const float n)
{
	this->_rawBits = roundf(n * (1 << _bits));
}

Fixed::Fixed(const int	n)
{
	this->_rawBits = n << _bits;
}


Fixed::~Fixed()
{
}

Fixed	&Fixed::operator=(const Fixed &fixedp)
{
	if (this != &fixedp)
		this->_rawBits = fixedp.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &fixedp) const
{
	return (this->_rawBits > fixedp.getRawBits());
}

bool	Fixed::operator<(const Fixed &fixedp) const
{
	return (this->_rawBits < fixedp.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixedp) const
{
	return (this->_rawBits > fixedp.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fixedp) const
{
	return (this->_rawBits <= fixedp.getRawBits());
}

bool	Fixed::operator==(const Fixed &fixedp) const
{
	return (this->_rawBits == fixedp.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fixedp) const
{
	return (this->_rawBits != fixedp.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &fixedp) const
{
	return (this->toFloat() + fixedp.toFloat());
}

Fixed	Fixed::operator-(const Fixed &fixedp) const
{
	return (this->toFloat() - fixedp.toFloat());
}

Fixed	Fixed::operator*(const Fixed &fixedp) const
{
	return (this->toFloat() * fixedp.toFloat());
}

Fixed	Fixed::operator/(const Fixed &fixedp) const
{
	return (this->toFloat() / fixedp.toFloat());
}

Fixed	Fixed::operator++(int)
{
	Fixed pre(*this);
	operator++();
	return (pre);
}

Fixed	Fixed::operator++(void)
{
	++this->_rawBits;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed pre(*this);
	operator--();
	return (pre);
}

Fixed	Fixed::operator--(void)
{
	--this->_rawBits;
	return (*this);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

int		Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}


void	Fixed::setRawBits(const int raw)
{
	_rawBits = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << _bits));
}

int Fixed::toInt(void) const
{
	return (static_cast<int>(this->getRawBits()) >> _bits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixedp)
{
	out << fixedp.toFloat();
	return (out);
}
