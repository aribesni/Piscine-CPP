/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:15:44 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/24 16:15:46 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {

    // std::cout << "AWeapon constructor called" << std::endl;
    return ;
}

AWeapon::AWeapon(AWeapon const &src) {

    this->_name = src.getName();
    this->_apcost = src.getAPCost();
    this->_damage = src.getDamage();
    return ;
}

AWeapon::~AWeapon(void) {

    // std::cout << "AWeapon destructor called" << std::endl;
    return ;
}

std::string AWeapon::getName(void) const {

    return (this->_name);
}

int AWeapon::getAPCost(void) const {

    return (this->_apcost);
}

int AWeapon::getDamage(void) const {

    return (this->_damage);
}

AWeapon&    AWeapon::operator=(AWeapon const &rhs) {

    this->_name = rhs.getName();
    this->_apcost = rhs.getAPCost();
    this->_damage = rhs.getDamage();
    return (*this);
}