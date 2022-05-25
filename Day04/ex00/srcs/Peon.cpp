/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:40:12 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/23 13:40:13 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string get_name) : Victim(get_name), name(get_name) {

    std::cout << "Zog zog" << std::endl;
    return ;
}

Peon::Peon(Peon const &src) : Victim(src) {

    return ;
}

Peon::~Peon(void) {

    std::cout << "Bleuark..." << std::endl;
    return ;
}

void    Peon::getPolymorphed(void) const {

    std::cout << this->name << " was just polymorphed into a pink pony !" << std::endl;
    return ;
}

Peon&   Peon::operator=(Peon const &rhs) {

    (void)rhs;
    return (*this);
}