/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:18:08 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/17 18:27:45 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0)	{

}

Point::Point( const Point& src ) : _x(src.recupX()), _y(src.recupY())	{

}

Point::Point( const float x, const float y) : _x( Fixed(x) ), _y( Fixed(y) )	{

}

Fixed	Point::recupX( void )	const {

	return ( this->_x );

}

Fixed	Point::recupY( void )	const {

	return ( this->_y );

}

Point::Point( const Fixed _x, const Fixed _y) : _x(_x), _y(_y)	{

}

Point&	Point::operator=( const Point& rhs )	{

	( void )rhs;
	return ( *this );

}

Point::~Point( void )	{

}
