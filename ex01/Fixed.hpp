/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:07:53 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/16 13:19:30 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int					_fixedPointValue;
        static const int	_fractionalBits = 8;

    public:
        Fixed(void);
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &fixed);
        ~Fixed(void);

        Fixed	&operator=(const Fixed &fixed);

        int		getRawBits(void) const;
        void	setRawBits(int const raw);
        float	toFloat(void) const;
        int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif