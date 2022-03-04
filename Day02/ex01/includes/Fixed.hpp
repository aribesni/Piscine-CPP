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
        float   toFloat(void) const;
        int     toInt(void) const;

        Fixed   &operator=(Fixed const &rhs);

    private :

        int                 _nb;
        static const int    _bit;

};

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs);

#endif