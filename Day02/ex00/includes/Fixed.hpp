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

class Fixed {

    public :

        Fixed(void);
        ~Fixed(void);
        
        Fixed(Fixed const & fix);
        Fixed&   operator=(Fixed const & rhs);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

    private :

        int         _nb;
        static int  _bit;

};

#endif