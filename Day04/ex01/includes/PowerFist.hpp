/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:45:57 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/25 11:45:58 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIST_H
# define POWER_FIST_H

# include "AWeapon.hpp"
# include <iostream>

class   PowerFist : public AWeapon {

    public :

        PowerFist(void);
        PowerFist(PowerFist const &src);
        ~PowerFist(void);

        virtual void    attack(void) const;

        PowerFist   &operator=(PowerFist const &rhs);
};

#endif