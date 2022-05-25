/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:47:05 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/23 12:47:06 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string get_name) : name(get_name) {

    std::cout << "A random victim called " << this->name << " just appeared !" << std::endl;
    return ;
}

Victim::Victim(Victim const &src) {

    this->name = src.getName();
}

Victim::~Victim(void) {

    std::cout << "The victim " << this->name << " died for no apparent reason !" << std::endl;
    return ;
}

std::string Victim::getName(void) const {

    return (this->name);
}

std::ostream    &operator<<(std::ostream &o, Victim const &rhs) {

    o << "I'm " << rhs.getName() << " and I like lame stuff !" << std::endl;
    return (o);
}

void    Victim::getPolymorphed(void) const {

    std::cout << this->name << " was just polymorphed in cute little sheep !" << std::endl;
    return ;
}

Victim&    Victim::operator=(Victim const &rhs) {

    this->name = rhs.getName();
    return (*this);
}