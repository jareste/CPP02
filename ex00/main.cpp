/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 03:00:16 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/14 04:07:13 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int main( void )
{
Fixed a;
Fixed b( a );
Fixed c;

c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return (0);
}
