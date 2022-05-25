/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:27:55 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/25 14:27:56 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : ap(40), _name(name) {

    // std::cout << "Character constructor called" << std::endl;
    return ;
}

Character::Character(Character const &src) {

    this->ap = 40;
    this->_name = src.getName();
    return ;
}

Character::~Character(void) {

    // std::cout << "Character destructor called" << std::endl;
    return ;
}

void    Character::recoverAP(void) {

    std::cout << "Recovering 10 action points" << std::endl;
    if (this->ap == 40)
        std::cout << "Maximum action points reached" << std::endl;
    else if ((this->ap + 10) > 40)
        this->ap += (40 - this->ap);
    else
        this->ap += 10;
    return ;
}

void    Character::equip(AWeapon* w) {

    this->weapon = w;
    return ;
}

void    Character::attack(Enemy *e) {

    this->enemy = e;
    std::cout << this->_name << " attacks " << this->enemy->getType() << " with a " << this->weapon->getName() << std::endl;
    this->weapon->attack();
    this->ap -= this->weapon->getAPCost();
    this->enemy->takeDamage(this->weapon->getDamage());
    if (this->enemy->getHP() <= 0)
        this->enemy->~Enemy();
    return ;
}

std::string Character::getName(void) const {

    return (this->_name);
} 

std::ostream    &operator<<(std::ostream &o, Character const &rhs) {

    if (rhs.weapon)
        o << rhs.getName() << " has " << rhs.ap << " AP and carries a " << rhs.weapon->getName() << std::endl;
    else
        o << rhs.getName() << " has " << rhs.ap << " AP and is unarmed" << std::endl;
    return (o);
}

Character&  Character::operator=(Character const &rhs) {

    this->ap = rhs.ap;
    this->_name = rhs.getName();
    return (*this);
}