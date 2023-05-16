/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:53:42 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/16 13:19:51 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int					_fixedPointValue;
        static const int	_fractionalBits = 8;

    public:
        Fixed(void);
        Fixed(const Fixed &fixed);
        ~Fixed(void);

        Fixed	&operator=(const Fixed &rhs);

        int		getRawBits(void) const;
        void	setRawBits(int const raw);
};

#endif