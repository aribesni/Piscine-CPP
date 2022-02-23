/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:46:13 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/11 14:46:14 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <unistd.h>

ZombieHorde::ZombieHorde(int n) : nb(n) {

    // std::cout << "Class created" << std::endl;
    int i;

    this->Horde = new Zombie[n];
    this->setZombieType = "Horde";
    while (n--)
    {
        sleep(1);
        srand(time(0));
        i = (rand() % 12);
        std::string name[13] = {"Lebron", "Kobe", "Michael", "Larry", "Wilt", "Earvin",
            "Allen", "Giannis", "Dikembe", "Karim", "Hakeem", "Kawhi", "Kyrie"};
        std::cout << std::endl << "\033[1m\033[35m" << "Generating random zombie ..." << "\033[0m" << std::endl << std::endl;
        this->Horde[n].advert(name[i], this->setZombieType);
        std::cout << std::endl;
    }
    return ;
}

ZombieHorde::~ZombieHorde(void) {

    // std::cout << "Class destroyed" << std::endl;
    delete[] this->Horde;
    return ;
}

Zombie* ZombieHorde::newZombie(std::string name) {

    Zombie  *new_zombie = new Zombie;

    new_zombie->advert(name, this->setZombieType);
    return (new_zombie);
}