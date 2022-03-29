/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:28:00 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/25 14:28:00 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <iostream>

class   Character {
    
    public :

        Character(std::string const &name);
        ~Character(void);
        void    recoverAP(void);
        void    equip(AWeapon *w);
        void    attack(Enemy *e);
        std::string getName(void) const;

        int         ap;
        AWeapon     *weapon;
        Enemy       *enemy;

    private :

        std::string _name;
};

std::ostream    &operator<<(std::ostream &o, Character const &rhs);

#endif