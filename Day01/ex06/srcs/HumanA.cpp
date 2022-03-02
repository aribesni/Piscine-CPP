/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:57:45 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/25 12:57:47 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (std::string setName, Weapon &setWeapon) : name(setName), _WeaponA(setWeapon) {

    std::cout << "Class HumanA created" << std::endl;
    return ;
}

HumanA::~HumanA (void) {

    std::cout << "Class HumanA destroyed" << std::endl;
    return ;
}

void    HumanA::attack(void) {

    std::cout << this->name << " attacks with his " << this->_WeaponA.getType() << std::endl;
    return ;
}