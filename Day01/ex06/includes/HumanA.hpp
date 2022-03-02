/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:56:01 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/25 12:56:02 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"
# include <iostream>

class HumanA {

    public :

        std::string name;

        HumanA(std::string setName, Weapon &setWeapon);
        ~HumanA(void);

        void    attack(void);
    
    private :
       
        Weapon      &_WeaponA;

};

#endif