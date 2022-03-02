/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:45:16 by aribesni          #+#    #+#             */
/*   Updated: 2022/02/25 12:45:17 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string addType) : type(addType) {

    std::cout << "Class Weapon created" << std::endl;
    return ;
}

Weapon::~Weapon (void) {

    std::cout << "Class Weapon destroyed" << std::endl;
    return ;
}

const std::string   Weapon::getType(void) const{

    return (this->type);
}

void    Weapon::setType(std::string weaponType) {

    this->type = weaponType;
    return ;
}