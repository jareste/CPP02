/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 03:00:35 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 08:53:04 by jareste-         ###   ########.fr       */
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
		Fixed(const Fixed &fixedp);
		~Fixed();
		Fixed	&operator=(const Fixed &fixedp);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif
