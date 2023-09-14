/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 03:00:35 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/14 04:07:11 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include "Fixed.h"

class Fixed
{
	private:
		int	_rawBits;
		static const int _bits = 8;
	public:
		Fixed();
		Fixed(Fixed &fixedp);
		~Fixed();
		Fixed	&operator=(Fixed const &fixedp);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
