/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:48:17 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/31 20:48:18 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name) {

    int i;

    i = 0;
    while (i < 4)
    {
        this->_m[i] = NULL;
        i++;
    }
    // std::cout << "Character constructor called" << std::endl;
    return ;
}

Character::Character(Character const &src) {

    int i;

    i = 0;
    while (i < 4)
    {
        this->_m[i] = NULL;
        i++;
    }
    this->_name = src.getName();
    return ;
}

Character::~Character(void) {

    // std::cout << "Character destructor called" << std::endl;
    return ;
}

std::string const&   Character::getName(void) const {

    return (this->_name);
}

void    Character::equip(AMateria *m) {

    int i;

    i = 0;
    while (this->_m[i] && i < 4)
        i++;
    if (i < 4)
        _m[i] = m;
    else
        delete m;
    return ;
}

void    Character::unequip(int idx) {

    if (idx >= 0 && idx < 4)
        this->_m[idx] = NULL;
    return ;
}

void    Character::use(int idx, ICharacter &target) {

    if (idx >= 0 && idx < 4 && this->_m[idx])
        this->_m[idx]->use(target);
    return ;
}

Character&  Character::operator=(Character const &rhs) {

    int i;

    i = 0;
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        while (i < 4)
        {
            if (rhs._m[i])
                this->_m[i] = rhs._m[i];
            else
                this->_m[i] = NULL;
        }
    }
    return (*this);
}