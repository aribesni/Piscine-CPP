/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:36:54 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/25 12:36:55 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {

    public :

        std::string type;

        Weapon(std::string addType);
        ~Weapon(void);

        const   std::string getType(void) const;
        void    setType(std::string weaponType);

};

#endif