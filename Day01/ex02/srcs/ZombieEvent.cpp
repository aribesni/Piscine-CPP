/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:46:13 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/11 14:46:14 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type) : setZombieType(type) {

    // std::cout << "Class created" << std::endl;
    return ;
}

ZombieEvent::~ZombieEvent(void) {

    // std::cout << "Class destroyed" << std::endl;
    return ;
}

Zombie* ZombieEvent::newZombie(std::string name) {

    Zombie  *new_zombie = new Zombie;

    new_zombie->advert(name, this->setZombieType);
    return (new_zombie);
}