/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:19:10 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/17 19:01:09 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int	main( int ac, char **av )	{

	(void)ac;
	(void)av;
	Point	point(1.26, 3);
	Point	a(3, 1);
	Point	b(3, 4);
	Point	c(-2, 1);

	int ret = bsp( a, b, c, point );
	if ( !ret )
		std::cout << "OUT" << std::endl;
	else 
		std::cout << "IN" << std::endl;
	
	return (0);
}