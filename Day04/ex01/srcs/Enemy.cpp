/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:11:34 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/25 13:11:35 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type) {

    // std::cout << "Enemy constructor called" << std::endl;
    return ;
}

Enemy::Enemy(Enemy const &src) {

    this->_hp = src.getHP();
    this->_type = src.getType();
    return ;
}

Enemy::~Enemy(void) {

    // std::cout << "Enemy destructor called" << std::endl;
    return ;
}

std::string Enemy::getType(void) const {

    return (this->_type);
}

int Enemy::getHP(void) const {

    return (this->_hp);
}

void    Enemy::takeDamage(int i) {

    if (i >= 0) {

        // std::cout << "Enemy " << this->_type << " takes " << i << " damage points !" << std::endl;
        this->_hp -= i;
        // std::cout << "HP left : " << this->_hp << std::endl;
    }
}

Enemy&  Enemy::operator=(Enemy const &rhs) {

    this->_hp = rhs.getHP();
    this->_type = rhs.getType();
    return (*this);
}