/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 03:00:24 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/14 05:21:10 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_rawBits = 0;
}

Fixed::Fixed(Fixed const &fixedp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedp;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(n * (1 << _bits));
}

Fixed::Fixed(const int	n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = n << _bits;
}


Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &fixedp)
{
	std::cout << "Asignation operator called" << std::endl;
	if (this != &fixedp)
		this->_rawBits = fixedp.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}


void	Fixed::setRawBits(int const raw)
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

std::ostream	&operator<<(std::ostream &out, Fixed const &fixedp)
{
	out << fixedp.toFloat();
	return (out);
}
// std::ostream &operator<<(std::ostream &out, Fixed const &fixedp)
// {
// 	out << fixedp.toFloat();
// 	return (out);
// }
