/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:55:58 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/02 11:55:59 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {

    Fixed       a(4);
	// Fixed		b(2);
	Fixed		b(5.05f);
	// Fixed const b(Fixed(5.05f) * Fixed(2));

	puts("---Test---");
	std::cout << "      a        : " << a << std::endl;
	std::cout << "      b        : " << b << std::endl;
	std::cout << "     ++a       : " << ++a << std::endl;
	std::cout << "      a        : " << a << std::endl;
	std::cout << "     a++       : " << a++ << std::endl;
	std::cout << "      a        : " << a << std::endl;
	std::cout << "      b        : " << b << std::endl;
	std::cout << "     a>b       : " << (a > b) << std::endl;
	std::cout << "     a<b       : " << (a < b) << std::endl;
	std::cout << "     a>=b      : " << (a >= b) << std::endl;
	std::cout << "     a<=b      : " << (a <= b) << std::endl;
	std::cout << "     a==b      : " << (a == b) << std::endl;
	std::cout << "     a!=b      : " << (a != b) << std::endl;
	std::cout << "     a-b       : " << a - b << std::endl;
	std::cout << "     a+b       : " << b + a << std::endl;
	std::cout << "     a*b       : " << a * b << std::endl;
	std::cout << "     b/a       : " << b / a << std::endl;
	std::cout << "     a++       : " << a++ << std::endl;
	std::cout << "      a        : " << a << std::endl;
	std::cout << "     ++a       : " << ++a << std::endl;
	std::cout << "     a--       : " << a-- << std::endl;
	std::cout << "      a        : " << a << std::endl;
	std::cout << "     --a       : " << --a << std::endl;
	std::cout << "   max(a,b)    : " << max( a, b ) << std::endl;
	std::cout << "   min(a,b)    : " << min( a, b ) << std::endl;
	std::cout << "max((F)a,(F)b) : " << Fixed::max( (const Fixed)a, (const Fixed)b ) << std::endl;
	std::cout << "min((F)a,(F)b) : " << Fixed::min( (const Fixed)a, (const Fixed)b ) << std::endl;

    return (0);
}