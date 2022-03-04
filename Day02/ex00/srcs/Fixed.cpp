/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:54:32 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/02 11:54:33 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void) : _nb(0) {

    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed (void) {

    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const & fix) : _nb(fix.getRawBits()) {

    std::cout << "Copy constructor called" << std::endl;
    return ;
}

Fixed&  Fixed::operator=(Fixed const & rhs) {

    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_nb = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const {

    std::cout << "getRawBits member function called" << std::endl;
    return (this->_nb);
}

void    Fixed::setRawBits(int const raw) {

    this->_nb = raw;
    return ;
}

int Fixed::_bit = 8;