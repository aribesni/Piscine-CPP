/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:11:39 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/25 13:11:42 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

# include <iostream>

class Enemy {

    public :

        Enemy(int hp, std::string const &type);
        Enemy(Enemy const &src);
        virtual ~Enemy(void);

        std::string     getType(void) const;
        int             getHP(void) const;
        virtual void    takeDamage(int i);

        Enemy   &operator=(Enemy const &rhs);

    protected :

        int         _hp;
        std::string _type;
};

#endif