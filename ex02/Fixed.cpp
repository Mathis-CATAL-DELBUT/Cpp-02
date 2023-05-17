/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:27:49 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/17 18:07:00 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( void )
{
    this->_fixedPointValue = 0;
}

Fixed::Fixed( const Fixed &copy ) 
{
    *this = copy;
}

Fixed::Fixed( const int value )
{
    this->_fixedPointValue = value << this->_fractionalBits;
}

Fixed::Fixed( const float value )
{
    this->_fixedPointValue = roundf( value * ( 1 << this->_fractionalBits ) );
}

Fixed::~Fixed( void ) {}

Fixed &Fixed::operator=( const Fixed &copy )
{
    this->_fixedPointValue = copy.getRawBits();
    return ( *this );
}

int Fixed::getRawBits( void ) const
{
    return ( this->_fixedPointValue );
}

void Fixed::setRawBits( int const raw )
{
    this->_fixedPointValue = raw;
}

float Fixed::toFloat( void ) const
{
    return ( ( float )this->_fixedPointValue / ( 1 << this->_fractionalBits ) );
}

int Fixed::toInt( void ) const
{
    return ( this->_fixedPointValue >> this->_fractionalBits );
}

std::ostream &operator<<( std::ostream &o, const Fixed &fixed )
{
    o << fixed.toFloat();
    return ( o );
}

int Fixed::operator>( const Fixed &fixed ) const 
{
    return ( this->_fixedPointValue > fixed.getRawBits() );
}

int Fixed::operator<( const Fixed &fixed ) const 
{
    return ( this->_fixedPointValue < fixed.getRawBits() );
}

int Fixed::operator>=( const Fixed &fixed ) const
{
    return ( this->_fixedPointValue >= fixed.getRawBits() );
}

int Fixed::operator<=( const Fixed &fixed ) const
{
    return ( this->_fixedPointValue <= fixed.getRawBits() );
}

int Fixed::operator==( const Fixed &fixed ) const
{
    return ( this->_fixedPointValue == fixed.getRawBits() );
}

int Fixed::operator!=( const Fixed &fixed ) const
{
    return ( this->_fixedPointValue != fixed.getRawBits() );
}

Fixed Fixed::operator+( const Fixed &fixed ) const
{
    return ( Fixed( this->toFloat() + fixed.toFloat() ) );
}

Fixed Fixed::operator-( const Fixed &fixed ) const
{
    return ( Fixed( this->toFloat() - fixed.toFloat() ) );
}

Fixed Fixed::operator*( const Fixed&fixed ) const
{
    return ( Fixed( this->toFloat() * fixed.toFloat() ) );
}

Fixed Fixed::operator/( const Fixed &fixed ) const
{
    return ( Fixed( this->toFloat() / fixed.toFloat() ) );
}

Fixed &Fixed::operator++( void )
{
    this->_fixedPointValue++;
    return ( *this );
}

Fixed Fixed::operator++( int )
{
    Fixed tmp( *this );
    operator++();
    return ( tmp );
}

Fixed &Fixed::operator--( void )
{
    this->_fixedPointValue--;
    return ( *this );
}

Fixed Fixed::operator--( int )
{
    Fixed tmp( *this );
    operator--();
    return ( tmp );
}

Fixed &Fixed::min( Fixed &a, Fixed &b )
{
    return ( a < b ? a : b );
}

const Fixed &Fixed::min( const Fixed &a, const Fixed &b )
{
    return ( a < b ? a : b );
}

Fixed &Fixed::max( Fixed &a, Fixed &b )
{
    return ( a > b ? a : b );
}

const Fixed &Fixed::max( const Fixed &a, const Fixed &b )
{
    return ( a > b ? a : b );
}



