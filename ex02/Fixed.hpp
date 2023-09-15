/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 03:00:35 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 08:53:38 by jareste-         ###   ########.fr       */
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
		Fixed(const int	n);
		Fixed(const float n);
		Fixed(const Fixed &fixedp);
		~Fixed();
		
		Fixed	&operator=(const Fixed &fixedp);
		bool	operator>(const Fixed &fixedp) const;
		bool	operator<(const Fixed &fixedp) const;
		bool	operator>=(const Fixed &fixedp) const;
		bool	operator<=(const Fixed &fixedp) const;
		bool	operator==(const Fixed &fixedp) const;
		bool	operator!=(const Fixed &fixedp) const;
		
		Fixed	operator+(const Fixed &fixedp) const;
		Fixed	operator-(const Fixed &fixedp) const;
		Fixed	operator*(const Fixed &fixedp) const;
		Fixed	operator/(const Fixed &fixedp) const;

		Fixed	operator++(int);
		Fixed	operator++(void);
		Fixed	operator--(int);
		Fixed	operator--(void);

		static Fixed max(Fixed &a, Fixed &b);
		static const Fixed max(const Fixed &a, const Fixed &b);
		static Fixed min(Fixed &a, Fixed &b);
		static const Fixed min(const Fixed &a, const Fixed &b);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		
		float	toFloat(void) const;
		int		toInt(void)	 const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixedp);

#endif
