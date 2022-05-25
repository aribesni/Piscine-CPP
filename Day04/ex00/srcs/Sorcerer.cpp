/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:47:10 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/22 14:47:11 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string get_name, std::string get_type) : name(get_name), type(get_type) {

    std::cout << this->name << ", " << this->type << " is born !" << std::endl;
    return ;
}

Sorcerer::Sorcerer(Sorcerer const &src) {

    this->name = src.getName();
    this->type = src.getType();
}

Sorcerer::~Sorcerer(void) {

    std::cout << this->name << ", " << this->type << " is dead. Consequences will never be the same !" << std::endl;
    return ;
}

std::string Sorcerer::getName(void) const {

    return (this->name);
}

std::string Sorcerer::getType(void) const {

    return(this->type);
}

void    Sorcerer::polymorph(Victim const &vic) const {

    vic.getPolymorphed();
    return ;
}

std::ostream    &operator<<(std::ostream &o, Sorcerer const &rhs) {

    o << "I am " << rhs.getName() << ", " << rhs.getType() << ", and I like dark magic !" << std::endl;
    return (o);
}

Sorcerer&   Sorcerer::operator=(Sorcerer const &rhs) {

    this->name = rhs.getName();
    this->type = rhs.getType();
    return (*this);
}