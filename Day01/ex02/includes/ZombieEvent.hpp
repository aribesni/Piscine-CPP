/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:52:37 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/11 14:52:39 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include <iostream>
# include "Zombie.hpp"

class ZombieEvent {

    public :

        std::string name;
        std::string setZombieType;

        ZombieEvent(std::string type);
        ~ZombieEvent(void);

        Zombie* newZombie(std::string name);

};

#endif