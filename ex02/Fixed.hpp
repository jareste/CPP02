/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 03:00:35 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 01:28:52 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	_rawBits;
		static const int _bits = 8;
	public:
		Fixed();
		Fixed(int const	n);
		Fixed(float const n);
		Fixed(Fixed const &fixedp);
		~Fixed();
		
		Fixed	&operator=(Fixed const &fixedp);
		bool	operator>(Fixed const &autre) const;
		bool	operator<(Fixed const &autre) const;
		bool	operator>=(Fixed const &autre) const;
		bool	operator<=(Fixed const &autre) const;
		bool	operator==(Fixed const &autre) const;
		bool	operator!=(Fixed const &autre) const;
		
		Fixed	operator+(const Fixed &fixp) const;
		Fixed	operator-(const Fixed &fixp) const;
		Fixed	operator*(const Fixed &fixp) const;
		Fixed	operator/(const Fixed &fixp) const;

		Fixed	operator++(int);
		Fixed	operator++(void);
		Fixed	operator--(int);
		Fixed	operator--(void);

		static Fixed max(Fixed &a, Fixed &b);
		static const Fixed max(Fixed const &a, Fixed const &b);
		static Fixed min(Fixed &a, Fixed &b);
		static const Fixed min(Fixed const &a, Fixed const &b);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		float	toFloat(void) const;
		int		toInt(void)	 const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixedp);

#endif
