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

const int   Fixed::_bit = 8;

Fixed::Fixed (void) : _nb(0) {

    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const int i) {

    std::cout << "Int constructor called" << std::endl;
    this->_nb = i << Fixed::_bit;
}

Fixed::Fixed(const float f) {

    // std::cout << "Float constructor called" << std::endl;
    this->_nb = roundf(f * (1 << Fixed::_bit));
}

Fixed::Fixed(Fixed const &fix) : _nb(fix.getRawBits()) {

    // std::cout << "Copy constructor called" << std::endl;
    return ;
}

Fixed::~Fixed (void) {

    // std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const {

    return (this->_nb);
}

void    Fixed::setRawBits(int const raw) {

    this->_nb = raw;
    return ;
}

int Fixed::toInt(void) const {

    return (this->_nb >> Fixed::_bit);
}

float   Fixed::toFloat(void) const {

    return (this->_nb / (roundf(1 << Fixed::_bit)));
}

Fixed&  Fixed::operator=(Fixed const &rhs) {

    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_nb = rhs.getRawBits();
    return (*this);
}

Fixed   Fixed::operator+(Fixed const &rhs) {

    return (this->toFloat() + rhs.toFloat());
}

Fixed   Fixed::operator-(Fixed const &rhs) {

    return (this->toFloat() - rhs.toFloat());
}

Fixed   Fixed::operator*(Fixed const &rhs) {

    return (this->toFloat() * rhs.toFloat());
}

Fixed   Fixed::operator/(Fixed const &rhs) {

    return (this->toFloat() / rhs.toFloat());
}

Fixed   Fixed::operator++() {

    this->_nb += 1;
    return (*this);
}

Fixed   Fixed::operator--() {

    this->_nb -= 1;
    return (*this);
}

Fixed   Fixed::operator++(int) {

    Fixed   old = *this;
    Fixed::operator++();
    return (old);
}

Fixed   Fixed::operator--(int) {

    Fixed   old = *this;
    Fixed::operator--();
    return (old);
}

bool    Fixed::operator>(Fixed const &rhs) {

    return (this->toFloat() > rhs.toFloat());
}

bool    Fixed::operator<(Fixed const &rhs) {

    return (this->toFloat() < rhs.toFloat());
}

bool    Fixed::operator>=(Fixed const &rhs) {

    return (this->toFloat() >= rhs.toFloat());
}

bool    Fixed::operator<=(Fixed const &rhs) {

    return (this->toFloat() <= rhs.toFloat());
}

bool    Fixed::operator!=(Fixed const &rhs) {

    return (this->toFloat() != rhs.toFloat());
}

bool    Fixed::operator==(Fixed const &rhs) {

    return (this->toFloat() == rhs.toFloat());
}

const Fixed&  Fixed::min(Fixed const &a, Fixed const &b) {

    return (a.toFloat() > b.toFloat() ? b : a);
}

const Fixed&  Fixed::max(Fixed const &a, Fixed const &b) {
    
    return (a.toFloat() > b.toFloat() ? a : b);
}

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs) {

    o << rhs.toFloat();
    return (o);
}

Fixed   &min(Fixed &a, Fixed &b) {

    return (a.toFloat() > b.toFloat() ? b : a);
}

Fixed   &max(Fixed &a, Fixed &b) {

    return (a.toFloat() > b.toFloat() ? a : b);
}