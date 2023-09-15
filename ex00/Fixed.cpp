/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 03:00:24 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 08:53:00 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_rawBits = 0;
}

Fixed::Fixed(const Fixed &fixedp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedp;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fixedp)
{
	std::cout << "Asignation operator called" << std::endl;
	if (this != &fixedp)
		this->_rawBits = fixedp.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->_rawBits);
}


void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits called" << std::endl;
	_rawBits = raw;
}
