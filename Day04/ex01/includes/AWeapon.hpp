/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:15:53 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/24 16:15:54 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
# define AWEAPON_H

# include <iostream>

class   AWeapon {

    public :

        AWeapon(std::string const &name, int apcost, int damage);
        virtual ~AWeapon(void);
        std::string getName(void) const;
        int getAPCost(void) const;
        int getDamage(void) const;
        virtual void    attack(void) const = 0;

    private :

        std::string _name;
        int         _apcost;
        int         _damage;

};

#endif