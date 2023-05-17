/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:18:08 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/17 18:53:08 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(0), y(0) {}

Point::Point( const Point& src ) : x(src.get_x()), y(src.get_y())	{}

Point::Point( const float x, const float y) : x( Fixed(x) ), y( Fixed(y) )	{}

Fixed	Point::get_x( void )	const
{
	return ( this->x );
}

Fixed	Point::get_y( void )	const 
{
	return ( this->y );
}

Point::Point( const Fixed x, const Fixed y) : x(x), y(y) {}

Point&	Point::operator=( const Point& rhs )
{
	( void )rhs;
	return ( *this );
}

Point::~Point( void ) {}
