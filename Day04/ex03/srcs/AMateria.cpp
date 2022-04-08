/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aribesni <aribesni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:19:01 by aribesni          #+#    #+#             */
/*   Updated: 2022/03/31 15:19:03 by aribesni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &set_type) : type(set_type), _xp(0) {

    // std::cout << "AMateria constructor called" << std::endl;
    return ;
}

AMateria::~AMateria(void) {

    // std::cout << "AMateria destructor called" << std::endl;
    return ;
}

std::string const& AMateria::getType(void) const {

    return (this->type);
}

unsigned int    AMateria::getXP(void) const {

    return (this->_xp);
}

void    AMateria::use(ICharacter &target) {

    (void)target;
    this->_xp += 10;
    std::cout << "XP +10" << std::endl;
    return ;
}

AMateria&    AMateria::operator=(AMateria const &rhs) {

    if (this != &rhs)
        this->_xp = rhs.getXP();
    return (*this);
}