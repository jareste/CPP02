/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 03:00:16 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 04:06:52 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed c(5);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << "OTHER TESTS" << std::endl;
	a = 20;
	c = 900;
	std::cout << "a+b= " << a+b << std::endl;
	std::cout << "b+c= " << b+c << std::endl;
	std::cout << "c/b= " << c/b << std::endl;
	std::cout << "c/a= " << c/a << std::endl;
	std::cout << "a*b= " << a*b << std::endl;

	return (0);
}
