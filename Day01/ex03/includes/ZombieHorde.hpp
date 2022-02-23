/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:52:37 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/11 14:52:39 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {

    public :

        int         nb;
        Zombie      *Horde;
        std::string name;
        std::string setZombieType;

        ZombieHorde(int n);
        ~ZombieHorde(void);

        Zombie* newZombie(std::string name);

};

#endif