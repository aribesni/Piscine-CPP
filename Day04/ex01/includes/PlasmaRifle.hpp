/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:40:34 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/24 16:40:35 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_H
# define PLASMA_RIFLE_H

# include "AWeapon.hpp"
# include <iostream>

class   PlasmaRifle : public AWeapon {

    public :

        PlasmaRifle(void);
        PlasmaRifle(PlasmaRifle const &src);
        ~PlasmaRifle(void);

        virtual void    attack(void) const;

        PlasmaRifle &operator=(PlasmaRifle const &rhs);
};

#endif