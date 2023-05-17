/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:06:25 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/17 17:40:23 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>


class	Fixed	{

public:
	Fixed();
	Fixed( const Fixed &origin );
	Fixed( const float toFix );
	Fixed( const int toFix );
	~Fixed();

public:
	Fixed&	operator=( const Fixed& src );
	Fixed	operator+( const Fixed& src ) const ;
	Fixed	operator-( const Fixed& src ) const ;
	Fixed   operator*(const Fixed& src) const;
	Fixed	operator/( const Fixed& src ) const ;

	Fixed&	operator++( void );
	Fixed	operator++( int );
	Fixed&	operator--( void );
	Fixed	operator--( int );

	int		operator<( const Fixed & src ) const ;
	int		operator>( const Fixed & src ) const ;
	int		operator>=( const Fixed& src ) const ;
	int		operator<=( const Fixed& src ) const ;
	int		operator!=( const Fixed& src ) const ;
	int		operator==( const Fixed& src ) const ;

	static Fixed&		min( Fixed& a, Fixed& b );
	static Fixed&		max( Fixed& a, Fixed& b );
	static const Fixed&	min( const Fixed& a, const Fixed& b );
	static const Fixed&	max( const Fixed& a, const Fixed& b );

public:
	int		toInt( void ) const;
	float	toFloat( void ) const;
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:
	int					_fixedPointValue;
    static const int	_fractionalBits = 8;


};

std::ostream&	operator<<( std::ostream& out, const Fixed& src );

#endif