/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:16:48 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/17 18:28:09 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point		{

public:
	Point();
	Point( const Point& src );
	Point( const Fixed x, const Fixed y );
	Point( const float x, const float y );

	Fixed	recupX() const ;
	Fixed	recupY() const ;

	Point& operator=( const Point& rhs );

	~Point();

private:
	Fixed	const _x;
	Fixed	const _y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif