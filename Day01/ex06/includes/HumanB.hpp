/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:16:10 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/27 14:16:11 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"
#include <iostream>

class HumanB {

    public :

        std::string name;
        Weapon      *WeaponB;

        HumanB(std::string setName);
        ~HumanB(void);

        void    attack(void);
        void    setWeapon(Weapon &setWeapon);

};

#endif