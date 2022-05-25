/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:45:51 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/25 11:45:53 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {

    // std::cout << "Power Fist constructor called" << std::endl;
    return ;
}

PowerFist::PowerFist(PowerFist const &src) : AWeapon(src) {

    return ;
}

PowerFist::~PowerFist(void) {

    // std::cout << "Power Fist destructor called" << std::endl;
    return ;
}

void    PowerFist::attack(void) const {

    std::cout << "* pschhh... SBAM ! *" << std::endl;
    return ;
}

PowerFist&    PowerFist::operator=(PowerFist const &rhs) {

    this->_name = rhs.getName();
    this->_apcost = rhs.getAPCost();
    this->_damage = rhs.getDamage();
    return (*this);
}