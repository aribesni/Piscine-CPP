/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:40:39 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/24 16:40:40 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {

    // std::cout << "Plasma Rifle constructor called" << std::endl;
    return ;
}

PlasmaRifle::~PlasmaRifle(void) {

    // std::cout << "Plasma Rifle destructor called" << std::endl;
    return ;
}

void    PlasmaRifle::attack(void) const {

    std::cout << "* piouuu piouuu piouuu *" << std::endl;
    return ;
}