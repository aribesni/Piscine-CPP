/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 11:54:45 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/02 11:54:47 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cstdio>
# include <iomanip>
# include <string.h>
# include <ctime>
# include <bitset>
# include <cmath>

class Fixed {

    public :

        Fixed(void);
        Fixed(const int i);
        Fixed(const float f);
        Fixed(Fixed const &fix);
        ~Fixed(void);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
    
        int     toInt(void) const;
        float   toFloat(void) const;

        Fixed   &operator=(Fixed const &rhs);
        Fixed   operator+(Fixed const &rhs);
        Fixed   operator-(Fixed const &rhs);
        Fixed   operator*(Fixed const &rhs);
        Fixed   operator/(Fixed const &rhs);
    
        Fixed   operator++();                   // post
        Fixed   operator--();
        Fixed   operator++(int);                // pre
        Fixed   operator--(int);
    
        bool    operator>(Fixed const &rhs);
        bool    operator<(Fixed const &rhs);
        bool    operator>=(Fixed const &rhs);
        bool    operator<=(Fixed const &rhs);
        bool    operator!=(Fixed const &rhs);
        bool    operator==(Fixed const &rhs);

        static const Fixed   &min(Fixed const &a, Fixed const &b);
        static const Fixed   &max(Fixed const &a, Fixed const &b);

    private :

        int                 _nb;
        static const int    _bit;

};

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs);
Fixed           &min(Fixed &a, Fixed &b);
Fixed           &max(Fixed &a, Fixed &b);

#endif