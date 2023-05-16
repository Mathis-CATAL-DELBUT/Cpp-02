/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:07:49 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/16 13:19:34 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = value << this->_fractionalBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(value * (1 << this->_fractionalBits));
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

Fixed	&Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointValue = fixed.getRawBits();
    return (*this);
}

int		Fixed::getRawBits(void) const
{
    return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const
{
    return ((float)this->_fixedPointValue / (float)(1 << this->_fractionalBits));
}

int		Fixed::toInt(void) const
{
    return (this->_fixedPointValue >> this->_fractionalBits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}