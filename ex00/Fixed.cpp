/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:53:40 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/16 13:19:41 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointValue = rhs.getRawBits();
    return (*this);
}

int		Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}
