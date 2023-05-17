/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:18:47 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/17 18:57:11 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point )
{
	Fixed	res0;
	Fixed	res1;
	Fixed	res2;

	res0 = ( a.get_x() - point.get_x() ) * ( b.get_y() - point.get_y() ) - ( a.get_y() - point.get_y()) * ( b.get_x() - point.get_x() );
	res1 = ( b.get_x() - point.get_x() ) * ( c.get_y() - point.get_y() ) - ( b.get_y() - point.get_y()) * ( c.get_x() - point.get_x() );
	res2 = ( c.get_x() - point.get_x() ) * ( a.get_y() - point.get_y() ) - ( c.get_y() - point.get_y()) * ( a.get_x() - point.get_x() );

	if ( ( res0 < 0 && res1 < 0 && res2 < 0 ) || ( res0 > 0 && res1 > 0 && res2 > 0 ) )
		return ( true );
	return ( false );

}
