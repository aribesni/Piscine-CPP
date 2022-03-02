/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:17:54 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/27 14:17:55 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string setName) : name(setName) {

    std::cout << "Class HumanB created" << std::endl;
    return ;
}

HumanB::~HumanB(void) {

    std::cout << "Class HumanB destroyed" << std::endl;
    return ;
}

void    HumanB::attack(void) {

    std::cout << this->name << " attacks with his " << this->WeaponB->getType() << std::endl;
    return ;
}

void    HumanB::setWeapon(Weapon &setWeapon) {

    this->WeaponB = &setWeapon;
    return ;
}